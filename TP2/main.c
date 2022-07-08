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

    adicionaSimboloNaTabela(ordinario->tabela , "A", INT);
    adicionaSimboloNaTabela(ordinario->tabela , "E", INT);
    adicionaSimboloNaTabela(ordinario->tabela , "I", INT);
    adicionaSimboloNaTabela(ordinario->tabela , "O", INT);
    imprimirTabeladeSimbolos(ordinario->tabela);
    Simbolo* s = procuraTokenPeloLexema(eInicial, "E");
    imprimeSimbolo(s);
    return 0;
}