#ifndef symbol_h
#define symbol_h

#include <stdlib.h>
#include "tokens.h"
#include "tipo.h"

// Ponteiro para um símbolo
typedef struct Simbolo {
	// Lexema do símbolo
	char* lexema;
	// Tipo do símbolo
	Tipo tipo;
	// Ponteiro para o próximo símbolo da lista
	Simbolo* prox;
} Simbolo;

// Ponteiro para a tabela de símbolos
typedef struct TabelaDeSimbolos* tabela;
typedef struct TabelaDeSimbolos {
	// Ponteiro para a célula cabeça
	Simbolo* prox;
	// Quantidade de símbolos na tabela
	int contador;
} TabelaDeSimbolos;


// SymbolTablePointer createSymbolTable(void);

// void initSymbolTable(SymbolTablePointer *table);

// SymbolPointer createSymbol(Lexeme lexeme, IDType tipo);

// void addToSymbolTable(SymbolTablePointer table, Lexeme lexeme, IDType tipo);

// // void removeFromSymbolTable(SymbolTablePointer table, int index);

// SymbolPointer getSymbol(SymbolTablePointer table, Lexeme lexeme);

// void printSymbolCell(SymbolPointer symbol, int id);

// void printSymbolTableHeader(SymbolTablePointer table);

// void displaySymbolTable(SymbolTablePointer table);

#endif