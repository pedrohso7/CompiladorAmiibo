#include "../headers/simbolo.h"

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

TabelaDeSimbolos* iniciaTabelaDeSimbolos(){
    TabelaDeSimbolos* t = malloc(sizeof(TabelaDeSimbolos));

    if (!t) return NULL;

    t->prox = NULL;
    t->contador = 0;
    return t;
}

void adicionaSimboloNaTabela(TabelaDeSimbolos* t, char* lexema, Tipo tipo){
    Simbolo* s = criaSimbolo(lexema, tipo);
    
    if (t->contador == 0) {
        t->prox = s;
        t->contador += 1;
        return;
    }

    Simbolo* simboloAtual = t->prox;
    
    while (simboloAtual->prox != NULL) {
        simboloAtual = simboloAtual->prox;
    }
    
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
    Simbolo* simboloAtual = t->prox;
    
    while(simboloAtual != NULL){
        imprimeSimbolo(simboloAtual/*, id*/);
        simboloAtual = simboloAtual->prox;
        // id+=1;
    }
}