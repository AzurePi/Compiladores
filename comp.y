%{  //Definitions ------------------------------------------------------------------------------------------------------
    #include "cabecalho.h"
    #include <stdio.h>
    #include <stdlib.h>

    extern int linhas;
    extern int erros;
%}

%token ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVE FECHA_CHAVE ABRE_COLCHETES FECHA_COLCHETES
%token VIRGULA PONTO_E_VIRGULA
%token TIPO_REAL TIPO_INTEIRO TIPO_CARACTERE TIPO_LITERAL
%token NUM_INTEIRO NUM_REAL CARACTERE LITERAL
%token IDENTIFICADOR IGUAL
%token OPERADOR_ARITMETICO_UNARIO OPERADOR_ARITMETICO_BINARIO
%token OPERADOR_LOGICO COMPARADOR NEGACAO
%token SE SENAO POR ENQUANTO EXECUTE
%token MAIN

/* Adiconamos regras de precedência para alguns tokens*/
%left OPERADOR_LOGICO
%right NEGACAO

%start Programa_principal

%%  //Rules ------------------------------------------------------------------------------------------------------------

//programa principal ------------------------------------------
Programa_principal:
    MAIN ABRE_PARENTESES FECHA_PARENTESES Corpo
    ; // não há tipos para a função main, sendo iniciada apenas por main diretamente

Corpo:
    ABRE_CHAVE Comandos FECHA_CHAVE
    | error { yyerror("Verifique o corpo da instrução"); }
    ;

Comandos:
    Comando Comandos
    |
    ;

Comando:
    Declaracao
    | Atribuicao
    | Condicional
    | Laco
    | Comando_unario
    ;

//sintaxe de declaração ---------------------------------------
Declaracao:
    Tipo Lista_Var PONTO_E_VIRGULA
    ;

Tipo:
    TIPO_REAL
    | TIPO_INTEIRO
    | TIPO_CARACTERE
    | TIPO_LITERAL
    ;

Lista_Var:
    Var VIRGULA Lista_Var
    | Var
    ;

Var:
    IDENTIFICADOR
    | IDENTIFICADOR ABRE_COLCHETES NUM_INTEIRO FECHA_COLCHETES // reconhece um vetor (ou uma posição de um vetor, dependendo do contexto)
    ;

//Sintaxe de atribuição --------------------------------------
Atribuicao:
    Var IGUAL Exp_aritmetica PONTO_E_VIRGULA
    ;

Exp_aritmetica:
    Valor x
    | Var x
    | Exp_unaria x
    ;

Valor:
    NUM_INTEIRO
    | NUM_REAL
    | CARACTERE
    | LITERAL
    | error { yyerror("Valor inválido"); }
    ;

x:
    OPERADOR_ARITMETICO_BINARIO Exp_aritmetica
    |
    ;

//sintaxe de expressões lógicas -------------------------------
Exp_logica:
    Exp_logica OPERADOR_LOGICO Exp_logica
    | NEGACAO Exp_logica %prec NEGACAO
    | Exp_comparacao
    ;

Exp_comparacao:
    Exp_aritmetica COMPARADOR Exp_aritmetica
    ;

//sintaxe de estrutura condicional ----------------------------
Condicional:
    SE ABRE_PARENTESES Exp_logica FECHA_PARENTESES Corpo Senao
    ;

Senao:
    SENAO Corpo
    |
    ;

//sintaxe de estrutura de laço --------------------------------
Laco:
    Por Corpo
    | Enquanto Corpo
    | EXECUTE Corpo Enquanto PONTO_E_VIRGULA
    ;

Por:
    POR ABRE_PARENTESES Atribuicao PONTO_E_VIRGULA Exp_logica PONTO_E_VIRGULA Atribuicao FECHA_PARENTESES
    | POR ABRE_PARENTESES Atribuicao PONTO_E_VIRGULA Exp_logica PONTO_E_VIRGULA Comando_unario FECHA_PARENTESES
    ;

Enquanto:
    ENQUANTO ABRE_PARENTESES Exp_logica FECHA_PARENTESES
    ;

//sintaxe de operação aritmética unária -----------------------
Comando_unario:
    Exp_unaria PONTO_E_VIRGULA
    ;

Exp_unaria:
    IDENTIFICADOR OPERADOR_ARITMETICO_UNARIO
    | OPERADOR_ARITMETICO_UNARIO IDENTIFICADOR
    ;

%%  //Code -------------------------------------------------------------------------------------------------------------

extern void yyerror(const char *msg) {
    fprintf(stderr, "Erro de sintaxe na linha %d: %s\n", linhas, msg);
    erros++;
}

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
		puts("Análise concluída com sucesso");
}
