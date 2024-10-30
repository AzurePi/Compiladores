#ifndef CABECALHO_H
#define CABECALHO_H

#include <stdio.h>

typedef union {
  int inteiro;
  double real;
  char caractere;
  char* literal;
} YYSTYPE;

extern YYSTYPE yylval;

extern void yyerror(const char *);
extern int yylex(void);
//extern int yyparse(void);

extern FILE *yyin, *yyout;

#define YYSTYPE_IS_DECLARED 1

#endif //CABECALHO_H
