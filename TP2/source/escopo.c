#include "../headers/simbolo.h"
#include "../headers/escopo.h"
#include <stdio.h>
#include <string.h>

void iniciaEscopo(EscopoPonteiro *escopo, EscopoPonteiro *prev){
    *escopo = (EscopoPonteiro) malloc(sizeof(EscopoPonteiro));
    
    if(!(*escopo)) return;
    
    (*escopo)->prev = prev;
    (*escopo)->tabela = criaTabelaDeSimbolos();
}


Simbolo* procuraTokenPeloLexema(Escopo* escopoInicial, char* lexema){
    Escopo* atual = escopoInicial;
    if (atual == NULL) {return NULL;}

    while(atual != NULL){
        Simbolo* simbolo = pegarSimbolo(escopoInicial->tabela,lexema);
        if(simbolo != NULL){
            return simbolo;
        }
        atual = atual->prev;
    }
    return NULL;

}