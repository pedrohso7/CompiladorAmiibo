#ifndef tipos_h
#define tipos_h

#include <stdlib.h>

typedef enum TipoPrimitivo {
	T_DESCONHECIDO = -1,
	T_INT,
	T_FLOAT,
	T_CHAR,
	T_STRING,
	T_BOOLEAN,
	T_DATE,
	T_ARRAY,
} TipoPrimitivo;

char* retornaNomeTipoPrimitivo(TipoPrimitivo tipo);

#endif