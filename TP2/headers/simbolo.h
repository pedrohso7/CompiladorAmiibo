#ifndef simbolo_h
#define simbolo_h

#include <stdio.h>
#include "../headers/tipos_primitivos.h"
#include "../headers/tipos_token.h"

// Ponteiro para um símbolo
typedef struct Simbolo* SimboloPonteiro;
typedef struct Simbolo {
    // Endereço do símbolo
    unsigned int enderecoMemoria;//0 - 255
	// Lexema do símbolo
	char* lexema;
	// Tipo do símbolo
	TipoPrimitivo tipo;
	TipoToken tipoToken;
	// Ponteiro para o próximo símbolo da lista
	SimboloPonteiro prox;
} Simbolo;

// Ponteiro para a tabela de símbolos
typedef struct TabelaDeSimbolos {
	// Ponteiro para a célula cabeça
	SimboloPonteiro prox;
	int contador;
} TabelaDeSimbolos;

// Iniciar um Símbolo
Simbolo* criaSimbolo(char* lexema, TipoPrimitivo tipo, TipoToken tipoToken);

// Imprimir um Símbolo
void imprimeSimbolo(Simbolo* s);

// Criae uma Tabela de Símbolos
TabelaDeSimbolos* criaTabelaDeSimbolos();

// Inserir um Símbolo na Tabela de Símbolos
void adicionaSimboloNaTabela(TabelaDeSimbolos* t, char* lexema, TipoPrimitivo tipo, TipoToken tipoToken);

// Buscar um Símbolo na Tabela de Símbolos
Simbolo* pegarSimbolo(TabelaDeSimbolos* tabela, char* lexema);

//Verifica se um símbolo existe na tabela
int simboloExiste(TabelaDeSimbolos* tabela, char* lexema);

// Imprimir a Tabela de Símbolos
void imprimirTabeladeSimbolos(TabelaDeSimbolos* t);

#endif