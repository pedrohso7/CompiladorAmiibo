#include "../headers/tipos.h"

char* retornaNomeTipo(Tipo tipo){
    switch(tipo){
        case T_FLOAT:
            return "Fossil";        
	    case T_INT:
            return "Bug";
        case T_CHAR:
            return "Fish";
        case T_STRING:
            return "SeaCreature";
        case T_BOOLEAN:
            return "Butterfly";
        case T_DATE:
            return "Tree";
        case T_ARRAY:
            return "Flower";
        default:
            return "None";
    }
}