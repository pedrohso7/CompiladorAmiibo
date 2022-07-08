#include "tipos.h"


char* retornaNomeTipo(Tipo tipo){
    switch(tipo){
        case FLOAT:
            return "Fossil";        
	    case INT:
            return "Bug";
        case CHAR:
            return "Fish";
        case STRING:
            return "SeaCreature";
        case BOOLEAN:
            return "Butterfly";
        case DATE:
            return "Tree";
        case ARRAY:
            return "Flower";
        default:
            return "None";
    }
}