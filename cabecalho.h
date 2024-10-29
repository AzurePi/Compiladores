#ifndef CABECALHO_H
#define CABECALHO_H

typedef union {
  int inteiro;
  double real;
  char caractere;
  char* literal;
} YYSTYPE;

extern YYSTYPE yylval;

#define YYSTYPE_IS_DECLARED 1

#endif //CABECALHO_H
