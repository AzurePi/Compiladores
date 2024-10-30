%{	//Definitions ------------------------------------------------------------------------------------------------------
    #include "comp.tab.h"

    extern FILE *yyin;
    extern void yyerror(const char *);

    int linhas=1, erros=0;
%}

/* TODO: simplificação da definição de um identificador */
/*TODO: adição da categoria "comparador"*/

DIGITO	   [0-9]
ID	       [A-Za-z][A-Za-z0-9]*
ESPACO	   [\t\r" "]
/* FLUXO   se|senao|por|enquanto|execute|retorne
TIPO	   inteiro|real|caractere|literal
SEPARADOR  [,;{}[\]()]
ATRIBUICAO "="|"+="|"-=" //TODO: removemos -= e += para simplificar */
ARIT_UN	   "++"|"--"
ARIT_BIN   "+"|"-"|"*"|"/"|"%"
OP_LOGICO  "&&"|"||"
COMP		"=="|"!="|"<"|">"|"<="|">="

%%	//Rules ------------------------------------------------------------------------------------------------------------
{ESPACO}* 	//reconhece e ignora espaços em branco

\n+ { linhas += yyleng; } //reconhece e contabiliza mudanças de linha

"//"[^\n]*	 //reconhece e ignora comentários de uma única linha

"("    { return ABRE_PARENTESES; } //TODO: ao invés de termos todo um grupo de SEPARADORES, cada um é reconhecido individualmente
")"    { return FECHA_PARENTESES; }
"{"    { return ABRE_CHAVE; }
"}"    { return FECHA_CHAVE; }
"["    { return ABRE_COLCHETES; }
"]"    { return FECHA_COLCHETES; }
","    { return VIRGULA; }
";"    { return PONTO_E_VIRGULA; }

"real"			{ return TIPO_REAL; } //TODO: separamos "Palavra reservada" em seus constituintes; os tipos de variávies, e cada uma das esturturas de controle
"inteiro"       { return TIPO_INTEIRO; }
"caractere"     { return TIPO_CARACTERE; }
"literal"       { return TIPO_LITERAL; }
"se"            { return SE; }
"senao"         { return SENAO; }
"por"           { return POR; }
"enquanto"      { return ENQUANTO; }
"execute"       { return EXECUTE; }
"retorne"       { return RETORNE; }

"main"          { return MAIN; } //TODO: adicionamos reconhecimento da função main

{ARIT_UN}       { return OPERADOR_ARITMETICO_UNARIO; } //TODO: dividimos o reconhecimento de operadores unários e binários
{ARIT_BIN}      { return OPERADOR_ARITMETICO_BINARIO; }
{OP_LOGICO}     { return OPERADOR_LOGICO; }

{COMP}  { return COMPARADOR; } //TODO: adicionamos o reconhecimento de comparadores

"!"     { return NEGACAO; } //TODO: reconhecimento do operador de negação

"="		{ return IGUAL; } //TODO: removemos os símbolos += e -= para simplificar a atribuição

"-"?{DIGITO}+"."{DIGITO}+	{ return NUM_REAL; } //reconhece um número real (positivo ou negativo)
"-"?{DIGITO}+				{ return NUM_INTEIRO; } //reconhece um número inteiro (positivo ou negativo)

"'"[^']"'"			{ return CARACTERE; } //TODO: adicionamos reconhecimento de um caractere
\"([^\"]|\\\")*\"   { return LITERAL; } //TODO: adicionamos reocnhecimento de uma string literal

{ID}    { return IDENTIFICADOR; }

. {	yyerror("Token inválido"); erros++; } //reconhece como erro qualquer coisa que não se encaixe como regra válida

%%  //Code -------------------------------------------------------------------------------------------------------------

int yywrap() {
	return 1;
}
