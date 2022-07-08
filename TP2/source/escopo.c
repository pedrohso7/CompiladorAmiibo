#include "../headers/simbolo.h"
#include "../headers/escopo.h"
#include <stdio.h>
#include <string.h>

void iniciaEscopo(Escopo* escopo, Escopo* prev){
    escopo = (Escopo*) malloc(sizeof(Escopo*));
    
    if(!(escopo)) return;
    
    escopo->prev = prev;
    escopo->tabela = criaTabelaDeSimbolos();
}

void criaEscopo(Escopo* escopoAtual){
    Escopo* escopo = (Escopo *) malloc(sizeof(Escopo));
	
    if (!escopo) return;

	escopo->prev = escopoAtual;
	escopo->tabela = criaTabelaDeSimbolos();

    escopoAtual = escopo;
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