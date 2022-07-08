#ifndef simbolo_h
#define simbolo_h

#include <stdlib.h>
// #include "tokens.h"
#include "tipos.h"

// Ponteiro para um símbolo
typedef struct Simbolo {
    // Endereço do símbolo
    unsigned int enderecoMemoria;//0 - 255
	// Lexema do símbolo
	char* lexema;
	// Tipo do símbolo
	Tipo tipo;
	// Ponteiro para o próximo símbolo da lista
	Simbolo* prox;
} Simbolo;

// Ponteiro para a tabela de símbolos
typedef struct TabelaDeSimbolos {
	// Ponteiro para a célula cabeça
	Simbolo* prox;
	int contador;
} TabelaDeSimbolos;

// Iniciar um Símbolo
Simbolo* criaSimbolo(Lexema lexema, Tipo tipo);

// Imprimir um Símbolo
void imprimeSimbolo(Simbolo* s);

// Iniciar uma Tabela de Símbolos
TabelaDeSimbolos* iniciaTabelaDeSimbolos(Simbolo *table);

// Inserir um Símbolo na Tabela de Símbolos
void adicionaSimboloNaTabela(TabelaDeSimbolos* t, char* lexema, Tipo tipo);

// Buscar um Símbolo na Tabela de Símbolos
Simbolo* pegarSimbolo(TabelaDeSimbolos* tabela, char* lexema);

// Remover um Símbolo na Tabela de Símbolos
void removerSimbolo(TabelaDeSimbolos* tabela, char* lexema);

// Imprimir a Tabela de Símbolos
void imprimirTabeladeSimbolos(TabelaDeSimbolos* t)/

#endif