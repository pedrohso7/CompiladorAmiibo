#include "../headers/simbolo.h"
#include "../headers/escopo.h"
#include <stdio.h>
#include <string.h>

Escopo* criarEscopo(Escopo* prev){
    Escopo* escopo = (Escopo *) malloc(sizeof(Escopo));

    if(!escopo) return NULL;

    escopo->prev = prev;
    escopo->tabela = criaTabelaDeSimbolos();
    return escopo;
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

Simbolo* procuraTokenPeloLexemaEscopoAtual(Escopo* escopoAutal, char* lexema){
    if(escopoAutal == NULL) return NULL;
    return pegarSimbolo(escopoAutal->tabela, lexema);
}