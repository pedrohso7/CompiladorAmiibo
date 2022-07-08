#include <stdio.h>
#include "headers/simbolo.h"
#include "headers/tipos.h"
#include "headers/escopo.h"

int main(){
    Escopo *eInicial;
    Escopo *ordinario; 
    
    iniciaEscopo(eInicial, NULL);
    iniciaEscopo(ordinario, eInicial);
    adicionaSimboloNaTabela(eInicial->tabela , "A", INT);

    adicionaSimboloNaTabela(ordinario , "A", INT);
    adicionaSimboloNaTabela(ordinario , "E", INT);
    adicionaSimboloNaTabela(ordinario , "I", INT);
    adicionaSimboloNaTabela(ordinario , "O", INT);
    imprimirTabeladeSimbolos(ordinario);
    Simbolo* s = procuraTokenPeloLexema(eInicial, "E");
    imprimeSimbolo(s);
    return 0;
}