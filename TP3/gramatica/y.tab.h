/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    MAIN_TOKEN = 258,
    INT_TYPE = 259,
    FLOAT_TYPE = 260,
    STRING_TYPE = 261,
    BOOLEAN_TYPE = 262,
    VECTOR_TYPE = 263,
    CHAR_TYPE = 264,
    DATE_TYPE = 265,
    RELACIONAL_IGUALDADE = 266,
    RELACIONAL_NEGACAO = 267,
    RELACIONAL_MAIORQUE = 268,
    RELACIONAL_MENORQUE = 269,
    RELACIONAL_MAIORIGUAL = 270,
    RELACIONAL_MENORIGUAL = 271,
    RELACIONAL_OR = 272,
    RELACIONAL_AND = 273,
    MATEMATICO_SOMA = 274,
    MATEMATICO_SUBTRACAO = 275,
    MATEMATICO_MULTIPLICACAO = 276,
    MATEMATICO_DIVISAO = 277,
    MATEMATICO_MOD = 278,
    MATEMATICO_POW = 279,
    MATEMATICO_INCREMENTO = 280,
    MATEMATICO_DECREMENTO = 281,
    DESCONHECIDO = 282,
    IF_TOKEN = 283,
    ELSE_IF_TOKEN = 284,
    ELSE_TOKEN = 285,
    FOR_TOKEN = 286,
    WHILE_TOKEN = 287,
    RETURN_TOKEN = 288,
    BREAK_TOKEN = 289,
    CREATE_FUNC_TOKEN = 290,
    PRINT_TOKEN = 291,
    SCANF_TOKEN = 292,
    ABRIR_PARENTESES_TOKEN = 293,
    FECHAR_PARENTESES_TOKEN = 294,
    ABRIR_CHAVE_TOKEN = 295,
    FECHAR_CHAVE_TOKEN = 296,
    ABRIR_COLCHETE_TOKEN = 297,
    FECHAR_COLCHETE_TOKEN = 298,
    ATRIB_TOKEN = 299,
    VIRGULA_TOKEN = 300,
    COMMENT_TOKEN = 301,
    EOL_TOKEN = 302,
    INT = 303,
    FLOAT = 304,
    DATE = 305,
    STRING = 306,
    CHAR = 307,
    BOOLEAN = 308,
    VECTOR = 309,
    VAR_TOKEN = 310
  };
#endif
/* Tokens.  */
#define MAIN_TOKEN 258
#define INT_TYPE 259
#define FLOAT_TYPE 260
#define STRING_TYPE 261
#define BOOLEAN_TYPE 262
#define VECTOR_TYPE 263
#define CHAR_TYPE 264
#define DATE_TYPE 265
#define RELACIONAL_IGUALDADE 266
#define RELACIONAL_NEGACAO 267
#define RELACIONAL_MAIORQUE 268
#define RELACIONAL_MENORQUE 269
#define RELACIONAL_MAIORIGUAL 270
#define RELACIONAL_MENORIGUAL 271
#define RELACIONAL_OR 272
#define RELACIONAL_AND 273
#define MATEMATICO_SOMA 274
#define MATEMATICO_SUBTRACAO 275
#define MATEMATICO_MULTIPLICACAO 276
#define MATEMATICO_DIVISAO 277
#define MATEMATICO_MOD 278
#define MATEMATICO_POW 279
#define MATEMATICO_INCREMENTO 280
#define MATEMATICO_DECREMENTO 281
#define DESCONHECIDO 282
#define IF_TOKEN 283
#define ELSE_IF_TOKEN 284
#define ELSE_TOKEN 285
#define FOR_TOKEN 286
#define WHILE_TOKEN 287
#define RETURN_TOKEN 288
#define BREAK_TOKEN 289
#define CREATE_FUNC_TOKEN 290
#define PRINT_TOKEN 291
#define SCANF_TOKEN 292
#define ABRIR_PARENTESES_TOKEN 293
#define FECHAR_PARENTESES_TOKEN 294
#define ABRIR_CHAVE_TOKEN 295
#define FECHAR_CHAVE_TOKEN 296
#define ABRIR_COLCHETE_TOKEN 297
#define FECHAR_COLCHETE_TOKEN 298
#define ATRIB_TOKEN 299
#define VIRGULA_TOKEN 300
#define COMMENT_TOKEN 301
#define EOL_TOKEN 302
#define INT 303
#define FLOAT 304
#define DATE 305
#define STRING 306
#define CHAR 307
#define BOOLEAN 308
#define VECTOR 309
#define VAR_TOKEN 310

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "translate.y"

    struct NoObjeto{
        char nome[100];
        struct No *np;
    } NoObjeto;
    
    struct NoObjeto2 { 
			char nome[100];
            struct No *np;
			int tipo;
	} NoObjetoTipado;

    struct NoObjeto3 { 
			char nome[100];
            struct No *np;
			int tipo;
			char corpoIf[5];
			char corpoElse[5];
            char corpoElseIf[5];
	} NoObjetoCorpo; 
 

#line 190 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
