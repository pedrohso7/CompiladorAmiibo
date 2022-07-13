
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include "../headers/simbolo.h"
    #include "../headers/escopo.h"
    extern int yylineno;
    extern char* yytext;
    void yyerror(char *c);
    int yylex(void);
    Tipo tipo;
    TabelaDeSimbolos *tabela;
    
%}

%token INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE VECTOR_TYPE CHAR_TYPE DATE_TYPE
%token RELACIONAL_IGUALDADE RELACIONAL_NEGACAO RELACIONAL_MAIORQUE RELACIONAL_MENORQUE RELACIONAL_MAIORIGUAL RELACIONAL_MENORIGUAL RELACIONAL_OR RELACIONAL_AND
%token MATEMATICO_SOMA MATEMATICO_SUBTRACAO MATEMATICO_MULTIPLICACAO MATEMATICO_DIVISAO MATEMATICO_MOD MATEMATICO_POW MATEMATICO_INCREMENTO MATEMATICO_DECREMENTO
%token DESCONHECIDO
%token IF_TOKEN ELSE_IF_TOKEN ELSE_TOKEN
%token FOR_TOKEN WHILE_TOKEN RETURN_TOKEN BREAK_TOKEN
%token CREATE_FUNC_TOKEN PRINT_TOKEN SCANF_TOKEN
%token ABRIR_PARENTESES_TOKEN FECHAR_PARENTESES_TOKEN
%token ABRIR_CHAVE_TOKEN FECHAR_CHAVE_TOKEN  
%token ABRIR_COLCHETE_TOKEN FECHAR_COLCHETE_TOKEN
%token ATRIB_TOKEN VIRGULA_TOKEN VAR_TOKEN COMMENT_TOKEN
%token EOL_TOKEN
%token INT FLOAT DATE STRING CHAR BOOLEAN VECTOR

%left MATEMATICO_SOMA MATEMATICO_SUBTRACAO
%left MATEMATICO_DIVISAO MATEMATICO_MULTIPLICACAO
%right MATEMATICO_POW MATEMATICO_INCREMENTO MATEMATICO_DECREMENTO

%%


expr: 
    aritmetica
    | relacional
    | declaracao
    | VAR_TOKEN ATRIB_TOKEN expr
    | funcao
    | comando
    | criarFuncao
    | EOL_TOKEN
    | comment
    | anyTipe
    | expr aritmetica
    | expr relacional
    | expr declaracao
    | expr VAR_TOKEN ATRIB_TOKEN expr
    | expr funcao
    | expr comando
    | expr criarFuncao
    | expr EOL_TOKEN
    | expr comment
    | expr anyTipe
    |
    ;
aritmetica :
    numero
    | VAR_TOKEN
    | aritmetica MATEMATICO_SOMA aritmetica
    | aritmetica MATEMATICO_SUBTRACAO aritmetica
    | aritmetica MATEMATICO_DIVISAO aritmetica
    | aritmetica MATEMATICO_MULTIPLICACAO aritmetica
    | aritmetica MATEMATICO_MOD aritmetica
    | aritmetica MATEMATICO_POW aritmetica
    | ABRIR_PARENTESES_TOKEN aritmetica FECHAR_PARENTESES_TOKEN
    | aritmetica MATEMATICO_INCREMENTO 
    | aritmetica MATEMATICO_DECREMENTO
    ;

numero:
    FLOAT
    | INT
    ;
    
relacional :
    valorBool
    | valorBool RELACIONAL_IGUALDADE valorBool
    | valorBool RELACIONAL_NEGACAO valorBool
    | valorBool RELACIONAL_MAIORQUE valorBool
    | valorBool RELACIONAL_MENORQUE valorBool
    | valorBool RELACIONAL_MAIORIGUAL valorBool
    | valorBool RELACIONAL_MENORIGUAL valorBool
    | valorBool RELACIONAL_AND valorBool
    | valorBool RELACIONAL_OR valorBool
    ;

valorBool:
    BOOLEAN
    | aritmetica
    ;

tipos:
    INT_TYPE {inserir_tipo(T_INT); }
    |FLOAT_TYPE {inserir_tipo(T_FLOAT); }
    |CHAR_TYPE {inserir_tipo(T_CHAR); }
	|STRING_TYPE {inserir_tipo(T_STRING); }
	|BOOLEAN_TYPE {inserir_tipo(T_BOOLEAN); }
	|VECTOR_TYPE {inserir_tipo(T_ARRAY); }
	|DATE_TYPE{inserir_tipo(T_DATE); }


declaracao:
    tipos varNames
    ;

varNames:
    VAR_TOKEN {adicionar_tabela('v',tabela);}
    | varNames VIRGULA_TOKEN VAR_TOKEN
    ;

varNomesETipos:
    tipos VAR_TOKEN
    | varNomesETipos VIRGULA_TOKEN tipos VAR_TOKEN
    ;

funcao:
    VAR_TOKEN ABRIR_PARENTESES_TOKEN varNames FECHAR_PARENTESES_TOKEN


criarFuncao:
    CREATE_FUNC_TOKEN VAR_TOKEN ABRIR_PARENTESES_TOKEN varNomesETipos FECHAR_PARENTESES_TOKEN ABRIR_CHAVE_TOKEN expr FECHAR_CHAVE_TOKEN

anyTipe:
    INT
	| FLOAT
	| CHAR
	| STRING
	| BOOLEAN
	| VECTOR
	| DATE
    | VAR_TOKEN
    
comando:
   condicional
    | repeticao 
    | imprimir
    | input
    | retornar
    | BREAK_TOKEN

corpo:
    ABRIR_CHAVE_TOKEN expr FECHAR_CHAVE_TOKEN
    | ABRIR_CHAVE_TOKEN FECHAR_CHAVE_TOKEN


condicional:
    if
    | else
    | elseIF

if:
    IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo

else:
    ELSE_TOKEN corpo

elseIF:
    ELSE_IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo

repeticao:
    FOR_TOKEN ABRIR_PARENTESES_TOKEN aritmetica FECHAR_PARENTESES_TOKEN corpo
    | FOR_TOKEN ABRIR_PARENTESES_TOKEN aritmetica VIRGULA_TOKEN aritmetica FECHAR_PARENTESES_TOKEN corpo
    | WHILE_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo

imprimir:
    PRINT_TOKEN ABRIR_PARENTESES_TOKEN expr FECHAR_PARENTESES_TOKEN

input:
    SCANF_TOKEN ABRIR_PARENTESES_TOKEN  FECHAR_PARENTESES_TOKEN

retornar:
    RETURN_TOKEN anyTipe
    | RETURN_TOKEN aritmetica

comment:
    COMMENT_TOKEN

%%


void yyerror(char *c){
    printf("\nErro ao compilar o código!\n Mais detalhes abaixo:");
    fprintf(stderr,"Erro na linha %d \n Tipo do erro: %s\n",yylineno,c);
    exit(0);
}

void inserir_tipo(Tipo entrada) {
	tipo = entrada;
}

void adicionar_tabela(char c,TabelaDeSimbolos* tabela){
    int S = 0;
    S = simboloExiste(tabela,strdup(yytext));
    //printf("\n%d\n",S);

    if(S == 0){
        if(c == 'v'){
            adicionaSimboloNaTabela(tabela, strdup(yytext), tipo);
        }
        else {
            adicionaSimboloNaTabela(tabela, strdup(yytext), T_DESCONHECIDO);
        }
    }
 
}

int main(){
    tabela = criaTabelaDeSimbolos();
    adicionaSimboloNaTabela(tabela, "A", T_INT);

    #ifdef YYDEBUG
    yydebug = 0;
    #endif
    yyparse();
    printf("\n\nCódigo compilado com sucesso!\n\n");
    imprimirTabeladeSimbolos(tabela);


    return 0;
}

