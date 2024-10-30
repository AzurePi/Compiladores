/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_COMP_TAB_H_INCLUDED
# define YY_YY_COMP_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ABRE_PARENTESES = 258,         /* ABRE_PARENTESES  */
    FECHA_PARENTESES = 259,        /* FECHA_PARENTESES  */
    ABRE_CHAVE = 260,              /* ABRE_CHAVE  */
    FECHA_CHAVE = 261,             /* FECHA_CHAVE  */
    ABRE_COLCHETES = 262,          /* ABRE_COLCHETES  */
    FECHA_COLCHETES = 263,         /* FECHA_COLCHETES  */
    VIRGULA = 264,                 /* VIRGULA  */
    PONTO_E_VIRGULA = 265,         /* PONTO_E_VIRGULA  */
    TIPO_REAL = 266,               /* TIPO_REAL  */
    TIPO_INTEIRO = 267,            /* TIPO_INTEIRO  */
    TIPO_CARACTERE = 268,          /* TIPO_CARACTERE  */
    TIPO_LITERAL = 269,            /* TIPO_LITERAL  */
    NUM_INTEIRO = 270,             /* NUM_INTEIRO  */
    NUM_REAL = 271,                /* NUM_REAL  */
    CARACTERE = 272,               /* CARACTERE  */
    LITERAL = 273,                 /* LITERAL  */
    IDENTIFICADOR = 274,           /* IDENTIFICADOR  */
    IGUAL = 275,                   /* IGUAL  */
    OPERADOR_ARITMETICO_UNARIO = 276, /* OPERADOR_ARITMETICO_UNARIO  */
    OPERADOR_ARITMETICO_BINARIO = 277, /* OPERADOR_ARITMETICO_BINARIO  */
    OPERADOR_LOGICO = 278,         /* OPERADOR_LOGICO  */
    COMPARADOR = 279,              /* COMPARADOR  */
    NEGACAO = 280,                 /* NEGACAO  */
    SE = 281,                      /* SE  */
    SENAO = 282,                   /* SENAO  */
    POR = 283,                     /* POR  */
    ENQUANTO = 284,                /* ENQUANTO  */
    EXECUTE = 285,                 /* EXECUTE  */
    RETORNE = 286,                 /* RETORNE  */
    MAIN = 287                     /* MAIN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_COMP_TAB_H_INCLUDED  */
