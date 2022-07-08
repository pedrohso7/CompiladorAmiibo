#include <stdio.h>
#include "headers/simbolo.h"
#include "headers/tipos.h"
#include "headers/escopo.h"

int main(){
    Escopo eInicial;
    Escopo ordinario; 
    
    // printf("1");
    iniciaEscopo(&eInicial, NULL);
    // printf("2");
    iniciaEscopo(&ordinario, &eInicial);
    // printf("3");
    // adicionaSimboloNaTabela(eInicial.tabela , "A", INT);
    // adicionaSimboloNaTabela(ordinario.tabela , "A", INT);
    // adicionaSimboloNaTabela(ordinario.tabela , "E", INT);
    // adicionaSimboloNaTabela(ordinario.tabela , "I", INT);
    // adicionaSimboloNaTabela(ordinario.tabela , "O", INT);
    // imprimirTabeladeSimbolos(eInicial.tabela);
    // Simbolo* s = procuraTokenPeloLexema(eInicial, "E");
    // imprimeSimbolo(s);
    return 0;
}