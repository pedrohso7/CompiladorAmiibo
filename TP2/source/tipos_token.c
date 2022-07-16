#include "../headers/tipos_token.h"

char* retornaNomeTipoToken(TipoToken tipo){
    switch(tipo){
        case T_FUNCAO:
            return "Funcao";        
	    case T_VARIAVEL:
            return "Variavel";
        case T_CONSTANTE:
            return "Constante";
        case T_PALAVRACHAVE:
            return "Palavra chave";
        default:
            return "None";
    }
}