#include <stdio.h>
#include "headers/simbolo.h"
#include "headers/tipos.h"

int main(){
    TabelaDeSimbolos *t;
    Tipo tipo = INT;
    
    t = iniciaTabelaDeSimbolos();

    adicionaSimboloNaTabela(t, "ASKNDAN", tipo);
    imprimirTabeladeSimbolos(t);
    return 0;
}