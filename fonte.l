%{	//Definitions
	int linhas=1, erros=0;
	
	void print_token(char *tipo) {
		printf("%s: %s\n", tipo, yytext);
	}
%}

DIGITO	   [0-9]
ID	   [A-Za-z][A-Za-z0-9]*
ESPACO	   [\t\r" "]
FLUXO	   se|senao|por|enquanto|execute|retorne
TIPO	   inteiro|real|caractere|literal
SEPARADOR  [,;{}[\]()]
ATRIBUICAO "="|"+="|"-="
ARIT_UN	   "++"|"--"
ARIT_BIN   "+"|"-"|"*"|"/"|"%"
OP_LOGICO  "&&"|"||"|"=="|"!"

%%	//Rules -----------------------------------------------------------------------
{ESPACO} //reconhece um espaço em branco

{FLUXO}|{TIPO} {
	print_token("Palavra reservada");
} //reconhece uma palavra reservada para controle de fluxo ou nome de tipo de dado

{SEPARADOR} {
	print_token("Separador");
} //reconhece um separador

{ATRIBUICAO} {
	printf("Atribuição: %s\n", yytext);
} //reconhece símbolos de atribuição

{DIGITO}+{ID} {
	printf("ERRO: Identificador inválido: %s - ", yytext);
	erros++;
	printf("Linha: %d\n", linhas);
} //reconhece um erro, um identificador que começa com um dígito

{ID}{DIGITO}*{ID}* {
	print_token("Identificador");
} //reconhece um identificador

"-"?{DIGITO}+ {
	print_token("Inteiro");
} //reconhece um número inteiro (positivo ou negativo)

"-"?{DIGITO}+"."{DIGITO}+ {
	print_token("Real");
} //reconhece um número real (positivo ou negativo)

{ARIT_UN}|{ARIT_BIN} {
	print_token("Operador aritmético");
} //reconhece um símbolo de operação aritmética unária ou binária

{OP_LOGICO} {
	print_token("Operador lógico");
} //reconhece um símbolo de operação lógica

"//"[^\n]* {
	print_token("Comentário");
} //reconhece comentários de uma única linha

\n {
	linhas++;
} //reconhece e contabiliza mudança de linha

. {
	printf("Token inválido: %s - ", yytext);
	erros++;
	printf("Linha: %d\n", linhas);
} //reconhece como erro qualquer coisa que não se encaixe como regra válida

%%

//Code ---------------------------------------------------------------------------------

int yywrap();

int main() {
	yylex();
	printf("Total de erros encontrados: %d\n", erros);
	if (erros==0)
		puts("\nCódigo analisado com sucesso!\n");
}

int yywrap() {
	return 1;
}
