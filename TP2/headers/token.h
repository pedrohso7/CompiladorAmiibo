#ifndef token_h
#define token_h

#include <stdlib.h>
#include <string.h>

typedef enum Token {
	DESCONHECIDO = -1,
	MODULE_START_TOKEN = 258,
	MODULE_END_TOKEN = 259,
	ASSIGN_TOKEN = 260,
	DELIMITER_TOKEN = 261,
	CONST_TOKEN = 262,
	TYPE_TOKEN = 263,
	IDENTIFIER_TOKEN = 264,
	RELOP_TOKEN = 265,
	MATHOP_TOKEN = 266,
	NUMBER_TOKEN = 267,
	BOOLEAN_TOKEN = 268,
	RETURN_TOKEN = 269,
	STRING_TOKEN = 270,
	CHAR_TOKEN = 271,
	NIL_TOKEN = 272,
	ATOM_TOKEN = 273,
	IF_TOKEN = 274,
	ELSE_TOKEN = 275,
	IF_END_TOKEN = 276,
	FUNC_START_TOKEN = 277,
	FUNC_END_TOKEN = 278,
	THEN_TOKEN = 279,
	PARAN_OPEN_TOKEN = 280,
	PARAN_CLOSE_TOKEN = 281,
	BRACK_OPEN_TOKEN = 282,
	BRACK_CLOSE_TOKEN = 283,
	COMMA_TOKEN = 284
} Token;

typedef enum TipoOperador{
	DESCONHECIDO = -1,
	RELACIONAL_IGUALDADE,
	RELACIONAL_NEGACAO,
	RELACIONAL_MAIORQUE,
	RELACIONAL_MENORQUE,
	RELACIONAL_MAIORIGUAL,
	RELACIONAL_MENORIGUAL,
	RELACIONAL_OR,
	RELACIONAL_AND,

	MATEMATICO_SOMA,
	MATEMATICO_SUBTRACAO,
	MATEMATICO_MULTIPLICACAO,
	MATEMATICO_DIVISAO,
	MATEMATICO_MOD,
	MATEMATICO_POW,
	MATEMATICO_INCREMENTO,
	MATEMATICO_DECREMENTO
} TipoOperador;

#endif