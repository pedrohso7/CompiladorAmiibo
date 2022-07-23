#ifndef arvore_h
#define arvore_h

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct No {
  struct No *filhoEsquerdo;
  struct No *filhoDireito;
  char *token;     
};

struct No* criaNo(struct No *filhoEsquerdo, struct No *filhoDireito, char *token);
void imprimirArvore(struct No* arvore);
void imprimirEmOrdem(struct No *arvore);

#endif