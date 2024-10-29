%{	//Definitions
	int linhas=1, erros=0;
	
	// função auxiliar para imprimir informações de um token
	void print_token(char *tipo) {
		printf("%s: %s\n", tipo, yytext);
	}
	
	// função auxiliar para imprimir uma mensagem de erro e contabilizá-lo
	void report_error(const char* menssagem, const char* token, int linha) {
	    printf("\033[31;1m");
	    printf("ERRO: %s: %s - Linha: %d\n", menssagem, token, linha);
	    printf("\033[0m");
	    erros++;
	}
	
%}

DIGITO	   [0-9]
ID	       [A-Za-z][A-Za-z0-9]*
ESPACO	   [\t\r" "]
FLUXO	   se|senao|por|enquanto|execute|retorne
TIPO	   inteiro|real|caractere|literal
SEPARADOR  [,;{}[\]()]
ATRIBUICAO "="|"+="|"-="
ARIT_UN	   "++"|"--"
ARIT_BIN   "+"|"-"|"*"|"/"|"%"
OP_LOGICO  "&&"|"||"|"=="|"!"

%%	//Rules -----------------------------------------------------------------------
{ESPACO}+ //reconhece um ou mais espaços em branco

\n+ {
	linhas += yyleng;
} //reconhece e contabiliza mudanças de linha

"//"[^\n]* {
	print_token("Comentário");
} //reconhece comentários de uma única linha

{FLUXO}|{TIPO} {
	print_token("Palavra reservada");
} //reconhece uma palavra reservada para controle de fluxo ou nome de tipo de dado

{SEPARADOR} {
	print_token("Separador");
} //reconhece um separador

{ATRIBUICAO} {
	print_token("Atribuição");
} //reconhece símbolos de atribuição

{ID}{DIGITO}*{ID}* {
	print_token("Identificador");
} //reconhece um identificador

"-"?{DIGITO}+"."{DIGITO}*({ID}|[{}\[\]()])+ {
	report_error("Número real com parte decimal incorreta", yytext, linhas);
} //reconhece um erro, um número real com a parte decimal não-numérica

"-"?{DIGITO}+"."{DIGITO}+ {
	print_token("Real");
} //reconhece um número real (positivo ou negativo)

"-"?{DIGITO}+({ID}|[{}\[\]()])+ {
	report_error("Token inválido", yytext, linhas);
} //reconhece um erro, um número seguido por um caractere não-dígito

"-"?{DIGITO}+ {
	print_token("Inteiro");
} //reconhece um número inteiro (positivo ou negativo)

{ARIT_UN}|{ARIT_BIN} {
	print_token("Operador aritmético");
} //reconhece um símbolo de operação aritmética unária ou binária

{OP_LOGICO} {
	print_token("Operador lógico");
} //reconhece um símbolo de operação lógica

. {
	report_error("Token inválido", yytext, linhas);
} //reconhece como erro qualquer coisa que não se encaixe como regra válida

%%

//Code ---------------------------------------------------------------------------------

int yywrap();

int main() {
	yylex();
	printf("\nTotal de erros encontrados: %d\n", erros);
	if (erros==0)
		puts("\nCódigo analisado com sucesso!\n");
}

int yywrap() {
	return 1;
}
