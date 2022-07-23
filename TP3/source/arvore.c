#include "../headers/arvore.h"

struct No* criaNo(struct No *filhoEsquerdo, struct No *filhoDireito, char *token) {
  struct No *novoNo = (struct No*) malloc(sizeof(struct No));
  char *novaString = (char*) malloc(strlen(token)+1);
  
  strcpy(novaString, token);
  novoNo->filhoEsquerdo = filhoEsquerdo;
  novoNo->filhoDireito = filhoDireito;
  novoNo->token = novaString;
  return(novoNo);
}

void imprimirArvore(struct No* arvore){
  printf("FUNCAO IMPRIMIR ARVORE");
	imprimirEmOrdem(arvore);
	printf("\n\n");
}

void imprimirEmOrdem(struct No *arvore){
	int i;
  printf("FUNCAO IMPRIMIR EM ORDEM");
	if (arvore->filhoEsquerdo) {
		imprimirEmOrdem(arvore->filhoEsquerdo);
	}

  printf("%s, ", arvore->token);
	
  if (arvore->filhoDireito) {
		imprimirEmOrdem(arvore->filhoDireito);
	}
}
