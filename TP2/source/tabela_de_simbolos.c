#include "tabela_de_simbolos.h"

/**
 * adiciona um simbolo a tabela
 */
void addSimbolo ( Simbolo * s)
{
    HASH_ADD_STR(TabelaDeSimbolos, nome,s);
}

/**
 * Cria uma token com o nome e o tipo especificados
 */
 Simbolo * criarSimbolo (char * nome, char * clazz, char * tipo)
{
     Simbolo *s;
    //alocar memória
    s = malloc(sizeof( Simbolo));
    s->adress = 0;
    strcpy (s->nome,nome);
    if (tipo != NULL)
        strcpy (s->tipo,tipo);
    else
        memset (s->tipo,0,256);
    if (clazz != NULL)
        strcpy (s->clazz,clazz);
    else
        memset (s->clazz,0,256);
    return s;
}

/**
 * Inicia a tabela de simbolos (chama as funções clean e initializeDefaults)
 */
void iniciaTabelaDeSimbolos ()
{
    //inicializa o hash
    TabelaDeSimbolos = NULL;
    //tipos primitivos
    addSimbolo(criarSimbolo("boolean","reserverd_word",NULL));
    addSimbolo(criarSimbolo("byte","reserverd_word",NULL));
    addSimbolo(criarSimbolo("int","reserverd_word",NULL));
    addSimbolo(criarSimbolo("string","reserverd_word",NULL));
    //controladores
    addSimbolo(criarSimbolo("while","reserverd_word",NULL));
    addSimbolo(criarSimbolo("if","reserverd_word",NULL));
    addSimbolo(criarSimbolo("else","reserverd_word",NULL));
    addSimbolo(criarSimbolo("begin","reserverd_word",NULL));
    addSimbolo(criarSimbolo("end","reserverd_word",NULL));
    //operadores
    addSimbolo(criarSimbolo("AND","reserverd_word",NULL));
    addSimbolo(criarSimbolo("OR","reserverd_word",NULL));
    addSimbolo(criarSimbolo("NOT","reserverd_word",NULL));
    addSimbolo(criarSimbolo("==","reserverd_word",NULL));
    addSimbolo(criarSimbolo("=","reserverd_word",NULL));
    addSimbolo(criarSimbolo("<=","reserverd_word",NULL));
    addSimbolo(criarSimbolo(">=","reserverd_word",NULL));
    addSimbolo(criarSimbolo("+","reserverd_word",NULL));
    addSimbolo(criarSimbolo("-","reserverd_word",NULL));
    addSimbolo(criarSimbolo("*","reserverd_word",NULL));
    addSimbolo(criarSimbolo("/","reserverd_word",NULL));
    addSimbolo(criarSimbolo("<","reserverd_word",NULL));
    addSimbolo(criarSimbolo(">","reserverd_word",NULL));
    addSimbolo(criarSimbolo("!=","reserverd_word",NULL));
    //constantes
    addSimbolo(criarSimbolo("TRUE","reserverd_word","boolean"));
    addSimbolo(criarSimbolo("FALSE","reserverd_word","boolean"));
    //funcoes
    addSimbolo(criarSimbolo("readln","reserverd_word",NULL));
    addSimbolo(criarSimbolo("write","reserverd_word",NULL));
    addSimbolo(criarSimbolo("writeln","reserverd_word",NULL));
    //outros
    addSimbolo(criarSimbolo("final","reserverd_word",NULL));
    addSimbolo(criarSimbolo(",","reserverd_word",NULL));
    addSimbolo(criarSimbolo(";","reserverd_word",NULL));
    addSimbolo(criarSimbolo("(","reserverd_word",NULL));
    addSimbolo(criarSimbolo(")","reserverd_word",NULL));
}

/**
 * retorna a quantidade de itens na tabela
 */
unsigned int tamanhoTabela()
{
    return HASH_COUNT(TabelaDeSimbolos);
}

/**
 * retorna o simbolo encontrado de acordo com o nome especificado, ou null quando não encontrado
 */
 Simbolo * encontraToken (const char * nome)
{
    Simbolo *s;
    HASH_FIND_STR (TabelaDeSimbolos, nome, s );
    return s;
}

/**
 * Imprimi uma token
 */
void imprimeSimbolo ( Simbolo *s)
{
    if (s->tipo == NULL)
        printf("end: %d \t nome: %s \n", s->adress, s->nome);
    else if (s->clazz == NULL)
        printf("end: %d \t nome: %s \t tipo: %s \n", s->adress, s->nome,s->tipo);
    else
        printf("end: %d \t nome: %s \t tipo: %s \t classe: %s \n", s->adress, s->nome,s->tipo,s->clazz);
}

/**
 * imprimi a tabela de simbolos
 */
void imprimeTabela ()
{
    printf("\n");
     Simbolo *s;
    for(s=TabelaDeSimbolos; s != NULL; s=s->hh.proximo)
        imprimeSimbolo(s);
}

/**
 * Compara se duas token são iguais
 */
int compararToken ( Simbolo *s1,char * nomeToken)
{
    if (s1 == NULL)
        return 0;
    return ( strcmp (s1->nome,nomeToken) == 0 );
}

/**
 * Compara se duas token tem o mesmo tipo
 */
int compararTipoToken ( Simbolo *s1,char * tipoToken)
{
    if (s1 == NULL)
        return 0;
    return (strcmp(s1->tipo,tipoToken) == 0);
}

/**
 * Compara se duas token tem a mesma classe
 */
int compararClasseToken ( Simbolo *s1,char * tokenClazz)
{
    if (s1 == NULL)
        return 0;
    return (strcmp(s1->clazz,tokenClazz) == 0);
}