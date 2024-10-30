%{  //Definitions ------------------------------------------------------------------------------------------------------
    #include "cabecalho.h"
    #include <stdio.h>
    #include <stdlib.h>

    extern int linhas;
    extern int erros;

    void msg_sucesso(const char *regra) {
        printf("Regra próximo à linha %d: %s\n", linhas, regra);
    }

    extern void yyerror(const char *msg) {
        fprintf(stderr, "Erro de sintaxe próximo à linha %d: %s\n", linhas, msg);
        erros++;
    }

%}

%token ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVE FECHA_CHAVE ABRE_COLCHETES FECHA_COLCHETES
%token VIRGULA PONTO_E_VIRGULA
%token TIPO_REAL TIPO_INTEIRO TIPO_CARACTERE TIPO_LITERAL
%token NUM_INTEIRO NUM_REAL CARACTERE LITERAL
%token IDENTIFICADOR IGUAL
%token OPERADOR_ARITMETICO_UNARIO OPERADOR_ARITMETICO_BINARIO
%token OPERADOR_LOGICO COMPARADOR NEGACAO
%token SE SENAO POR ENQUANTO EXECUTE RETORNE
%token MAIN

/* Adiconamos regras de precedência para alguns tokens*/
%left OPERADOR_ARITMETICO_BINARIO
%right NEGACAO
%left OPERADOR_LOGICO

%start Programa_principal

%%  //Rules ------------------------------------------------------------------------------------------------------------

//programa principal ------------------------------------------
Programa_principal:
    MAIN ABRE_PARENTESES FECHA_PARENTESES Corpo { msg_sucesso("Programa principal"); }
    ; // não há tipos para a função main, sendo iniciada apenas por main diretamente

Corpo:
    ABRE_CHAVE Comandos FECHA_CHAVE
    ;

Comandos:
    Comando Comandos
    |
    ;

Comando:
    Declaracao { msg_sucesso("Comando - Declaracao"); }
    | Atribuicao { msg_sucesso("Comando - Atribuicao"); }
    | Condicional { msg_sucesso("Comando - Condicional"); }
    | Laco
    | Comando_unario { msg_sucesso("Comando - Comando unário"); }
    | error PONTO_E_VIRGULA { yyerror("Comando não reconhecido"); }
    ;

//sintaxe de declaração ---------------------------------------
Declaracao:
    Tipo Lista_Var PONTO_E_VIRGULA
    ;

Tipo:
    TIPO_REAL { msg_sucesso("Tipo - Real"); }
    | TIPO_INTEIRO { msg_sucesso("Tipo - Inteiro"); }
    | TIPO_CARACTERE { msg_sucesso("Tipo - Caractere"); }
    | TIPO_LITERAL { msg_sucesso("Tipo - Literal"); }
    ;

Lista_Var:
    Var VIRGULA Lista_Var
    | Var
    | error VIRGULA Lista_Var { yyerror("Variável problemática"); }
    ;

Var:
    IDENTIFICADOR { msg_sucesso("Variável - Simples"); }
    | IDENTIFICADOR ABRE_COLCHETES NUM_INTEIRO FECHA_COLCHETES { msg_sucesso("Variável - Vetor"); }
    | IDENTIFICADOR ABRE_COLCHETES error FECHA_COLCHETES { yyerror("Índice de vetor deve ser um número inteiro"); }
    ;

//Sintaxe de atribuição --------------------------------------
Atribuicao:
    Atrib PONTO_E_VIRGULA
    ;

Atrib:
    Var IGUAL Exp_aritmetica
    ;

Exp_aritmetica:
    Valor
    | Var
    | Exp_unaria
    | Exp_aritmetica OPERADOR_ARITMETICO_BINARIO Exp_aritmetica
    | ABRE_PARENTESES Exp_aritmetica FECHA_PARENTESES
    ;

Valor:
    NUM_INTEIRO { msg_sucesso("Valor - Número inteiro"); }
    | NUM_REAL { msg_sucesso("Valor - Número real"); }
    | CARACTERE { msg_sucesso("Valor - Caractere"); }
    | LITERAL  { msg_sucesso("Valor - Literal"); }
    | error { yyerror("Valor inválido"); }
    ;

//sintaxe de expressões lógicas -------------------------------
Exp_logica:
    ABRE_PARENTESES Exp_logica FECHA_PARENTESES
    | Exp_logica OPERADOR_LOGICO Exp_logica { msg_sucesso("Expressão logica composta"); }
    | NEGACAO Exp_logica %prec NEGACAO { msg_sucesso("Expressão logica - Negação"); }
    | Exp_comparacao { msg_sucesso("Expressão lógica - Comparação"); }
    ;

Exp_comparacao:
    Exp_aritmetica COMPARADOR Exp_aritmetica
    ;

//sintaxe de estrutura condicional ----------------------------
Condicional:
    SE ABRE_PARENTESES Exp_logica FECHA_PARENTESES Corpo Senao
    | SE error { yyerror("Expressão condicional inválida"); }
    ;

Senao:
    SENAO Corpo
    |
    ;

//sintaxe de estrutura de laço --------------------------------
Laco:
    Por Corpo { msg_sucesso("Laço - Por"); }
    | Enquanto Corpo { msg_sucesso("Laço - Enquanto"); }
    | EXECUTE Corpo Enquanto PONTO_E_VIRGULA { msg_sucesso("Laço - Execute Enquanto"); }
    | EXECUTE error Enquanto { yyerror("Laço Execute Enquanto inválido"); }
    ;

Por:
    POR ABRE_PARENTESES Atrib VIRGULA Exp_logica VIRGULA Atrib FECHA_PARENTESES { msg_sucesso("Por - com Atribuição"); }
    | POR ABRE_PARENTESES Atrib VIRGULA Exp_logica VIRGULA Exp_unaria FECHA_PARENTESES { msg_sucesso("Por - com Comando unário"); }
    | POR error { yyerror("Laço Por inválido"); }
    ;

Enquanto:
    ENQUANTO ABRE_PARENTESES Exp_logica FECHA_PARENTESES
    | ENQUANTO error { yyerror("Laço Enquanto inválido"); }
    ;

//sintaxe de operação aritmética unária -----------------------
Comando_unario:
    Exp_unaria PONTO_E_VIRGULA
    ;

Exp_unaria:
    Var OPERADOR_ARITMETICO_UNARIO { msg_sucesso("Expressão unária - pós-unário"); }
    | OPERADOR_ARITMETICO_UNARIO Var { msg_sucesso("Expressão unária - pré-unário"); }
    | error OPERADOR_ARITMETICO_UNARIO { yyerror("Expressão unária inválida"); }
    | OPERADOR_ARITMETICO_UNARIO error { yyerror("Expressão unária inválida"); }
    ;

%%  //Code -------------------------------------------------------------------------------------------------------------

int main (int argc, char **argv ) {
	++argv, --argc; //desconsidera o nome do programa
	if ( argc > 0 )
		yyin = fopen( argv[0], "r" );
	else {
		puts("Falha ao abrir arquivo, nome incorreto ou não especificado. Digite o comando novamente."); //exibe mensagem de texto se o arquivo não for especificado ou for especificado com o nome errado
		exit(0);
	}

    //enquanto não chegar ao fim do arquivo faz as análises
	do
		yyparse();
	while (!feof(yyin));

	//Se não houver erros, imprime mensagem de fim de análise com sucesso
	if(erros==0)
		puts("Análise concluída com sucesso!");
}
