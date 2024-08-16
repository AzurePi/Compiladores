%{	//Definitions
	int linhas=1, erros=0;
%}

DIGITO	[0-9]
ID	[A-Za-z][A-Za-z0-9]*
ESPACO	[\t\r" "]

%%	//Rules
{ESPACO} //reconhece um espaço em branco

se|senao|por|enquanto|execute {
	printf("Palavra reservada: %s\n", yytext);
} //reconhece uma palavra reservada para controle de fluxo

inteiro|real|caractere|literal {
	printf("Palavra reservada: %s\n", yytext);
} //reconhece uma palavra reservada para tipo de dado

","|";"|"{"|"}"|"["|"]"|"("|")" {
	printf("Separador: %s\n", yytext);
} //reconhece um separador

"="|"+="|"-=" {
	printf("Atribuição: %s\n", yytext);
} //reconhece símbolos de atribuição

{DIGITO}+{ID} {
	printf("Identificador inválido: %s - ", yytext);
	erros++;
	printf("Linha: %d\n", linhas);
} //reconhece um erro, um identificador que começa com um dígito

{ID}{DIGITO}*{ID}* {
	printf("Identificador: %s\n", yytext);
} //reconhece um identificador

{DIGITO}+ {
	printf("Inteiro: %s\n", yytext);
} //reconhece um número inteiro

"-"{DIGITO}+ {
	printf("Inteiro: %s\n", yytext);
} //reconhece um número inteiro negativo

{DIGITO}+"."{DIGITO}+ {
	printf("Real: %s\n", yytext);
} //reconhece um número real

"-"{DIGITO}+"."{DIGITO}+ {
	printf("Real: %s\n", yytext);
} //reconhece um número real negativo

"++"|"--" {
	printf("Operador: %s\n", yytext);
} //reconhece um símbolo de operação aritmética unária

"+"|"-"|"*"|"/"|"%" {
	printf("Operador: %s\n", yytext);
} //reconhece um símbolo de operação aritmética binária

"&&"|"||"|"=="|"!" {
	printf("Operador: %s\n", yytext);
} //reconhece um símbolo de operação lógica

"//"[^\n]* {
	printf("Comentários\n");
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

//Code

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
