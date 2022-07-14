#ifndef tipos_h
#define tipos_h

#include <stdlib.h>

typedef enum TipoToken {
	T_DESCONHECIDO = -1,
	T_FUNCAO,
	T_VARIAVEL,
	T_CONSTANTE,
	T_PALAVRACHAVE,
} TipoToken;

char* retornaNomeTipoToken(TipoToken tipo);

#endif