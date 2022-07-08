#ifndef escopo_h
#define escopo_h

#include <stdlib.h>
#include "../headers/simbolo.h"

// Ponteiro para um escopo
typedef struct Escopo* EscopoPonteiro;

// Representação de um escopo do compilador
typedef struct Escopo {
	// Escopo anterior
	EscopoPonteiro prev;
	// Tabela do escopo
	TabelaDeSimbolos* tabela;
} Escopo;

void iniciaEscopo(Escopo* escopo, Escopo* prev);
void criaEscopo(Escopo* escopoAtual);
Simbolo* procuraTokenPeloLexema();
Simbolo* procuraTokenPeloLexemaEscopoAtual();

#endif