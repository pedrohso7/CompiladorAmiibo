#ifndef arvore_h
#define arvore_h
#include "token.h"

typedef struct No* NoPonteiro;
typedef struct No {
  NoPonteiro filhoEsquerdo;
  NoPonteiro filhoDireito;
  char *token;     
} No; 

typedef struct NomeVariavel {
   char nome[100];
   NoPonteiro np;
} NoObjeto;

NoPonteiro criaNo(NoPonteiro filhoEsquerdo, NoPonteiro filhoDireito, char *token);
void imprimirArvore(NoPonteiro arvore);
void imprimirEmOrdem(NoPonteiro arvore);

#endif