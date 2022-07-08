#ifndef tipos_h
#define tipos_h

#include <stdlib.h>

typedef enum Tipo {
	DESCONHECIDO = -1,
	INT,
	FLOAT,
	CHAR,
	STRING,
	BOOLEAN,
	DATE,
	ARRAY
} Tipo;

char* retornaNomeTipo(int tipo);

#endif