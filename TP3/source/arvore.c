#include "../headers/arvore.h"

NoPonteiro criaNo(NoPonteiro filhoEsquerdo, NoPonteiro filhoDireito, char *token) {
  NoPonteiro novoNo = (NoPonteiro) malloc(sizeof(No));
  char *novaString = (char*) malloc(strlen(token)+1);
  
  strcpy(novaString, token);
  novoNo->filhoEsquerdo = filhoEsquerdo;
  novoNo->filhoDireito = filhoDireito;
  novoNo->token = novaString;
  return(novoNo);
}

void imprimirArvore(NoPonteiro arvore){
	printf("\n\nÁrvore em Ordem:\n\n");
	printInorder(arvore);
	printf("\n\n");
}

void imprimirEmOrdem(NoPonteiro arvore){
	int i;

	if (arvore->filhoEsquerdo) {
		printInorder(arvore->filhoEsquerdo);
	}

  printf("%s, ", arvore->token);
	
  if (arvore->filhoDireito) {
		printInorder(arvore->filhoDireito);
	}
}