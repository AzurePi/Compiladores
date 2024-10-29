%{	//Definitions
    #include "analisador.h"
  	#include <string.h>
	#include <stdlib.h>
	#include <stdio.h>
    extern YYSTYPE yylval;	// variável para passar o valor dos tokens

	int linhas=1, erros=0;
%}

DIGITO	   [0-9]
ID	       [A-Za-z][A-Za-z0-9]* // TODO: simplificação da definição de um identificador
ESPACO	   [\t\r" "]
/* FLUXO	   se|senao|por|enquanto|execute|retorne
TIPO	   inteiro|real|caractere|literal
SEPARADOR  [,;{}[\]()]
ATRIBUICAO "="|"+="|"-=" //TODO: removemos -= e += para simplificar */
ARIT_UN	   "++"|"--"
ARIT_BIN   "+"|"-"|"*"|"/"|"%"
OP_LOGICO  "&&"|"||"
COMPARADOR "=="|"!="|"<"|">"|"<="|">=" //TODO: adição da categoria "comparador"

%%	//Rules -----------------------------------------------------------------------
{ESPACO}* 	//reconhece e ignora espaços em branco

\n+ { linhas += yyleng; } //reconhece e contabiliza mudanças de linha

"//"[^\n]*	 //reconhece e ignora comentários de uma única linha

/* TODO: ao invés de termos todo um grupo de SEPARADORES, cada um é reconhecido individualmente */
"("    { return ABRE_PARENTESES; }
")"    { return FECHA_PARENTESES; }
"{"    { return ABRE_CHAVE; }
"}"    { return FECHA_CHAVE; }
"["    { return ABRE_COLCHETES; }
"]"    { return FECHA_COLCHETES; }
","    { return VIRGULA; }
";"    { return PONTO_E_VIRGULA; }

/*TODO: separamos "Palavra reservada" em seus constituintes; os tipos de variávies, e cada uma das esturturas de controle*/
"real"			{ return TIPO_REAL; }
"inteiro"       { return TIPO_INTEIRO; }
"caractere"     { return TIPO_CARACTERE; }
"literal"       { return TIPO_LITERAL; }
"se"            { return SE; }
"senao"         { return SENAO; }
"por"           { return POR; }
"enquanto"      { return ENQUANTO; }
"execute"       { return EXECUTE; }
"retorne"       { return RETORNE; }

/*TODO: adicionamos reconhecimento da função main*/
"main"          { return MAIN; }

/*TODO: dividimos o reconhecimento de operadores unários e binários*/
{ARIT_UN}       { return OPERADOR_ARITMETICO_UNARIO; }
{ARIT_BIN}      { return OPERADOR_ARITMETICO_BINARIO; }
{OP_LOGICO}     { return OPERADOR_LOGICO; }

/*TODO: reconhecimento do operador de negação*/
"!"    { return NEGACAO; }

/*TODO: adicionamos o reconhecimento de comparadores*/
{COMPARADOR}    { return COMPARADOR; }

{ID}    { return IDENTIFICADOR; }

"="		{ return IGUAL; }

/*
"-"?{DIGITO}+"."{DIGITO}*({ID}|[{}\[\]()])+ {
	report_error("Número real com parte decimal incorreta", yytext, linhas);
} //reconhece um erro, um número real com a parte decimal não-numérica
*/

"-"?{DIGITO}+"."{DIGITO}+ { return NUM_REAL; } //reconhece um número real (positivo ou negativo)

/*
"-"?{DIGITO}+({ID}|[{}\[\]()])+ {
	report_error("Token inválido", yytext, linhas);
} //reconhece um erro, um número seguido por um caractere não-dígito
*/

"-"?{DIGITO}+ { return NUM_INTEIRO; } //reconhece um número inteiro (positivo ou negativo)

"'"[^']"'"	{ return CARACTERE; }
\"([^\"]|\\\")*\"   { return LITERAL; }

. {	yyerror("Token inválido"); erros++; } //reconhece como erro qualquer coisa que não se encaixe como regra válida

%%

//Code ---------------------------------------------------------------------------------

int yywrap() {
	return 1;
};

int main() {
	while(yylex());
	printf("\nTotal de erros encontrados: %d\n", erros);
	if (erros==0)
		puts("\nCódigo analisado com sucesso!\n");
}
