#include "../headers/simbolo.h"
#include <string.h>

Simbolo* criaSimbolo(char* lexema, Tipo tipo){
    Simbolo* s = (Simbolo *) malloc(sizeof(Simbolo));
    
    if (!s) return NULL;

    s->lexema = lexema;
    s->tipo = tipo;
    s->prox = NULL;

    return s;
}

void imprimeSimbolo(Simbolo* s){
        printf("Endereco: %d, Lexema: %s, Tipo: %s\n", s->enderecoMemoria, s->lexema, retornaNomeTipo(s->tipo));
}

TabelaDeSimbolos* criaTabelaDeSimbolos(){
    TabelaDeSimbolos* t = malloc(sizeof(TabelaDeSimbolos));

    if (!t) return NULL;

    t->prox = NULL;
    t->contador = 0;
    return t;
}

void adicionaSimboloNaTabela(TabelaDeSimbolos* t, char* lexema, Tipo tipo){
    Simbolo *s = criaSimbolo(lexema, tipo);
    
    if (t->contador == 0) {
        t->prox = s;
        t->contador += 1;
        return;
    }

    Simbolo *atual = t->prox;
    
    while (atual->prox != NULL) {
        atual = atual->prox;
    }

    atual->prox = s;
    t->contador += 1;
    return;
}

Simbolo* pegarSimbolo(TabelaDeSimbolos* tabela, char* lexema){
    if (tabela == NULL) { return NULL;}
    
    Simbolo* atual = tabela->prox;
    
    while(atual != NULL){
        if (strcmp(atual->lexema,lexema) == 0){
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

void imprimirTabeladeSimbolos(TabelaDeSimbolos* t){
    // int id = 1;
    Simbolo* atual = t->prox;
    
    while(atual != NULL){
        imprimeSimbolo(atual/*, id*/);
        atual = atual->prox   ;
        // id+=1;
    }
}