#include "headers/simbolo.h"
#include "headers/tipos_primitivos.h"
#include "headers/escopo.h"

int main(){
    // Criando uma Tabela e Adicionando Simbolos
    TabelaDeSimbolos *tabela;
    tabela = criaTabelaDeSimbolos();
    adicionaSimboloNaTabela(tabela, "A", T_INT);
    adicionaSimboloNaTabela(tabela, "B", T_STRING);
    adicionaSimboloNaTabela(tabela, "C", T_DATE);
    imprimirTabeladeSimbolos(tabela);

    // Procurando um Símbolo
    Simbolo *s = pegarSimbolo(tabela, "A");
    imprimeSimbolo(s);

    // Criando um Escopo e Adicionando uma Tabela
    Escopo *eInicial = criarEscopo(NULL);
    eInicial->tabela = tabela;
    adicionaSimboloNaTabela(eInicial->tabela, "E", T_INT);
    printf("\n");
    imprimirTabeladeSimbolos(eInicial->tabela);
    
    Escopo *ordinario = criarEscopo(eInicial); 
    adicionaSimboloNaTabela(ordinario->tabela, "A", T_DATE);
    adicionaSimboloNaTabela(ordinario->tabela, "O", T_STRING);
    printf("\n");
    imprimirTabeladeSimbolos(ordinario->tabela);

    Simbolo *s1 = procuraTokenPeloLexema(eInicial, "A");
    Simbolo *s2 = procuraTokenPeloLexema(ordinario, "A");
    Simbolo *s3 = procuraTokenPeloLexemaEscopoAtual(ordinario, "A");

    printf("\n");
    imprimeSimbolo(s1);
    printf("\n");
    imprimeSimbolo(s2);
    printf("\n");
    imprimeSimbolo(s3);
    return 0;
}