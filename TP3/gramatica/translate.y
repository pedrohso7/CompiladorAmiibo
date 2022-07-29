
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <string.h>
    #include "../headers/simbolo.h"
    #include "../headers/arvore.h"
    #include "../headers/escopo.h"
    extern int yylineno;
    extern char* yytext;
    

    void yyerror(char *c);
    int yylex(void);
    void inserir_tipo(TipoPrimitivo entrada);
    void adicionar_tabela(char* nome, char c,TabelaDeSimbolos* tabela,TabelaDeSimbolos* global);
    void checar_declaracao(char* c);
    int checar_tipos(int tipoA,int tipoB);
    EscopoPonteiro aprofundarEscopo(EscopoPonteiro escopoAcima);
    EscopoPonteiro voltarEscopo(EscopoPonteiro escopo);
    TipoPrimitivo get_tipo_Tabela(char* c);



    int errosemantico = 0;
    char errors[10][100];
    int ImprimirFechamentoEscopo = 0;
    TipoPrimitivo tipo;
    TabelaDeSimbolos *tabelaGlobal;
    EscopoPonteiro escopoAtual;
    struct No *raiz;

%}

%union{
    struct NoObjeto{
        char nome[100];
        struct No *np;
    } NoObjeto;
    
    struct NoObjeto2 { 
			char nome[100];
            struct No *np;
			int tipo;
	} NoObjetoTipado; 
}

%token <NoObjeto> MAIN_TOKEN
%token <NoObjeto> INT_TYPE FLOAT_TYPE STRING_TYPE BOOLEAN_TYPE VECTOR_TYPE CHAR_TYPE DATE_TYPE
%token <NoObjeto> RELACIONAL_IGUALDADE RELACIONAL_NEGACAO RELACIONAL_MAIORQUE RELACIONAL_MENORQUE RELACIONAL_MAIORIGUAL RELACIONAL_MENORIGUAL RELACIONAL_OR RELACIONAL_AND
%token <NoObjeto> MATEMATICO_SOMA MATEMATICO_SUBTRACAO MATEMATICO_MULTIPLICACAO MATEMATICO_DIVISAO MATEMATICO_MOD MATEMATICO_POW MATEMATICO_INCREMENTO MATEMATICO_DECREMENTO
%token <NoObjeto> DESCONHECIDO
%token <NoObjeto> IF_TOKEN ELSE_IF_TOKEN ELSE_TOKEN
%token <NoObjeto> FOR_TOKEN WHILE_TOKEN RETURN_TOKEN BREAK_TOKEN
%token <NoObjeto> CREATE_FUNC_TOKEN PRINT_TOKEN SCANF_TOKEN
%token <NoObjeto> ABRIR_PARENTESES_TOKEN FECHAR_PARENTESES_TOKEN
%token <NoObjeto> ABRIR_CHAVE_TOKEN FECHAR_CHAVE_TOKEN  
%token <NoObjeto> ABRIR_COLCHETE_TOKEN FECHAR_COLCHETE_TOKEN
%token <NoObjeto> ATRIB_TOKEN VIRGULA_TOKEN  COMMENT_TOKEN
%token <NoObjeto> EOL_TOKEN
%token <NoObjetoTipado> INT FLOAT DATE STRING CHAR BOOLEAN VECTOR VAR_TOKEN

%type <NoObjeto> expr program tipos declaracao varNames varNomesETipos funcao criarFuncao comando corpo condicional if else elseIF tabulacao repeticao imprimir input retornar comment atribuicao parametros
%type <NoObjetoTipado> init aritmetica relacional numero anyTipe valorBool

%left MATEMATICO_SOMA MATEMATICO_SUBTRACAO
%left MATEMATICO_DIVISAO MATEMATICO_MULTIPLICACAO
%right MATEMATICO_POW MATEMATICO_INCREMENTO MATEMATICO_DECREMENTO

%%

program:
    MAIN_TOKEN corpo {$$.np = criaNo(NULL, $2.np, "main"); raiz = $$.np;}
    ;  

expr: 
    aritmetica {$$.np = $1.np;}
    | relacional {$$.np = $1.np;}
    | declaracao {$$.np = $1.np;}
    | funcao {$$.np = $1.np;}
    | comando {$$.np = $1.np;}
    | criarFuncao {$$.np = $1.np;}
    | EOL_TOKEN {$$.np = $1.np;}
    | comment {$$.np = $1.np;}
    | atribuicao {$$.np = $1.np;}
    | anyTipe {$$.np = $1.np;}
    | expr expr {$$.np = criaNo($1.np, $2.np, "Expressões");} /* Statements */
    ;

atribuicao: 
    VAR_TOKEN {checar_declaracao($1.nome);}  ATRIB_TOKEN init {
        $1.np = criaNo(NULL, NULL, $1.nome); 
        $$.np = criaNo($1.np, $4.np, "=");
        checar_tipos(get_tipo_Tabela($1.nome),$4.tipo);
        }
    ;

init:
    aritmetica {$$.np = $1.np;$$.tipo = $1.tipo;}
    | anyTipe {$$.np = $1.np;$$.tipo = $1.tipo;}
    | relacional {$$.np = $1.np;$$.tipo = $1.tipo;}
    | input {$$.np = $1.np;$$.tipo = T_STRING;}

aritmetica:
    numero {$$.np = $1.np; $$.tipo = $1.tipo;}
    | VAR_TOKEN {$$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = get_tipo_Tabela($1.nome);}
    | funcao {$$.np = $1.np;$$.tipo = T_DESCONHECIDO;}
    | aritmetica MATEMATICO_SOMA aritmetica {$$.np = criaNo($1.np, $3.np, "+");$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_SUBTRACAO aritmetica {$$.np = criaNo($1.np, $3.np, "-");$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_DIVISAO aritmetica {$$.np = criaNo($1.np, $3.np, "/");$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_MULTIPLICACAO aritmetica {$$.np = criaNo($1.np, $3.np, "*");$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_MOD aritmetica {$$.np = criaNo($1.np, $3.np, "%");$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_POW aritmetica {$$.np = criaNo($1.np, $3.np, "**");$$.tipo = $1.tipo;}
    | ABRIR_PARENTESES_TOKEN aritmetica FECHAR_PARENTESES_TOKEN {$$.np = criaNo(NULL, NULL, $2.nome);$$.tipo = $2.tipo;}
    | aritmetica MATEMATICO_INCREMENTO {$$.np = criaNo($1.np, NULL, "++" );$$.tipo = $1.tipo;}
    | aritmetica MATEMATICO_DECREMENTO {$$.np = criaNo($1.np, NULL, "--");$$.tipo = $1.tipo;}
    ;

numero:
    FLOAT {$$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_FLOAT;} 
    | INT {$$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_INT;}
    ;
    
relacional:
    valorBool {$$.np = $1.np;$$.tipo = $1.tipo;}
    | funcao  {$$.np = $1.np;$$.tipo = T_DESCONHECIDO;}
    | valorBool RELACIONAL_IGUALDADE valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_NEGACAO valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_MAIORQUE valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_MENORQUE valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_MAIORIGUAL valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_MENORIGUAL valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_AND valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    | valorBool RELACIONAL_OR valorBool { $$.np = criaNo($1.np, $3.np, $2.nome);$$.tipo = $1.tipo;}
    ;

valorBool:
    BOOLEAN {$$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_BOOLEAN;}
    | aritmetica {$$.np = $1.np;$$.tipo = $1.tipo;}
    ;

tipos:
    INT_TYPE {inserir_tipo(T_INT); $$.np = criaNo(NULL, NULL, $1.nome);}
    |FLOAT_TYPE {inserir_tipo(T_FLOAT);  $$.np = criaNo(NULL, NULL, $1.nome);}
    |CHAR_TYPE {inserir_tipo(T_CHAR);  $$.np = criaNo(NULL, NULL, $1.nome);}
	|STRING_TYPE {inserir_tipo(T_STRING);  $$.np = criaNo(NULL, NULL, $1.nome);}
	|BOOLEAN_TYPE {inserir_tipo(T_BOOLEAN);  $$.np = criaNo(NULL, NULL, $1.nome);}
	|VECTOR_TYPE {inserir_tipo(T_ARRAY);  $$.np = criaNo(NULL, NULL, $1.nome);}
	|DATE_TYPE {inserir_tipo(T_DATE);  $$.np = criaNo(NULL, NULL, $1.nome);}


declaracao:
    tipos varNames {$2.np = criaNo(NULL, NULL, $2.nome); $$.np = criaNo($2.np, NULL, $1.nome);}
    | tipos VAR_TOKEN{adicionar_tabela($2.nome,'v',escopoAtual->tabela,tabelaGlobal);} ATRIB_TOKEN init {
        $2.np = criaNo(NULL, NULL, $2.nome); 
        $$.np = criaNo($2.np, $5.np, $1.nome);
        checar_tipos(get_tipo_Tabela($2.nome),$5.tipo);

        }
    ;

varNames:
    VAR_TOKEN {adicionar_tabela($1.nome,'v',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);}
    | varNames VIRGULA_TOKEN VAR_TOKEN {adicionar_tabela($3.nome,'v',escopoAtual->tabela,tabelaGlobal);}
    ;

varNomesETipos:
    tipos VAR_TOKEN {adicionar_tabela($1.nome,'v',escopoAtual->tabela,tabelaGlobal); $2.np = criaNo(NULL, NULL, $2.nome); $$.np = criaNo(NULL,$2.np, $1.nome);}
    | varNomesETipos VIRGULA_TOKEN tipos VAR_TOKEN {adicionar_tabela($4.nome,'v',escopoAtual->tabela,tabelaGlobal); $4.np = criaNo(NULL, NULL, $4.nome); $$.np = criaNo($1.np, $4.np, $3.nome);}
    ;

funcao:
    VAR_TOKEN ABRIR_PARENTESES_TOKEN parametros FECHAR_PARENTESES_TOKEN {$$.np = criaNo($1.np, $3.np, $$.nome);}

parametros:
     VAR_TOKEN {$$.np = criaNo(NULL, NULL, $1.nome);}
    | parametros VIRGULA_TOKEN VAR_TOKEN
    ;

criarFuncao:
    CREATE_FUNC_TOKEN VAR_TOKEN {adicionar_tabela($2.nome,'f',escopoAtual->tabela,tabelaGlobal);} ABRIR_PARENTESES_TOKEN varNomesETipos FECHAR_PARENTESES_TOKEN corpo {$2.np = criaNo($5.np, NULL, $2.nome); $$.np = criaNo($2.np, $7.np, $1.nome);}
    

anyTipe:
    INT {inserir_tipo(T_INT); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_INT;}
	| FLOAT {inserir_tipo(T_FLOAT); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_FLOAT;}
	| CHAR {inserir_tipo(T_CHAR); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_CHAR;}
	| STRING {inserir_tipo(T_STRING); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_STRING;}
	| BOOLEAN {inserir_tipo(T_BOOLEAN); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_BOOLEAN;} 
	| VECTOR {inserir_tipo(T_ARRAY); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_ARRAY;}
	| DATE {inserir_tipo(T_DATE); adicionar_tabela($1.nome,'c',escopoAtual->tabela,tabelaGlobal); $$.np = criaNo(NULL, NULL, $1.nome);$$.tipo = T_DATE;}
    | VAR_TOKEN
    
comando:
    condicional
    | repeticao 
    | imprimir
    | input
    | retornar
    | BREAK_TOKEN {$$.np = criaNo(NULL, NULL, $1.nome);}

corpo:
    ABRIR_CHAVE_TOKEN {escopoAtual = aprofundarEscopo(escopoAtual);} expr FECHAR_CHAVE_TOKEN {escopoAtual = voltarEscopo(escopoAtual);  $$.np = $3.np;} 


condicional:
    if


if:
	IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo tabulacao else {struct No *temp =  criaNo($3.np, $5.np, $1.nome); $$.np = criaNo(temp, $7.np,"Mabel Label");}
	| IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo tabulacao elseIF tabulacao else  { struct No *temp =  criaNo($3.np, $5.np, $1.nome); struct No *temp2 = criaNo(temp, $7.np,$7.nome);$$.np = criaNo(temp2,$9.np,"Sable Label");}

else:
    ELSE_TOKEN corpo {$$.np = criaNo(NULL, $2.np, $1.nome);}
    | {$$.np = NULL;}

elseIF:
    ELSE_IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo {$$.np =  criaNo($3.np, $5.np, $1.nome);}
	| elseIF tabulacao ELSE_IF_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo tabulacao {$3.np =  criaNo($5.np, $7.np, $3.nome); $$.np = criaNo($1.np, $3.np, $1.nome);}

tabulacao:
	EOL_TOKEN
	| tabulacao EOL_TOKEN
	|
    ;

repeticao:
    FOR_TOKEN ABRIR_PARENTESES_TOKEN aritmetica FECHAR_PARENTESES_TOKEN corpo {$$.np = criaNo($3.np, $5.np, $1.nome);}
    | FOR_TOKEN ABRIR_PARENTESES_TOKEN aritmetica VIRGULA_TOKEN aritmetica FECHAR_PARENTESES_TOKEN corpo {struct No *temp =  criaNo($3.np, $5.np, "Condicoes"); $$.np = criaNo(temp, $7.np, $1.nome);}
    | WHILE_TOKEN ABRIR_PARENTESES_TOKEN relacional FECHAR_PARENTESES_TOKEN corpo {$$.np = criaNo($3.np, $5.np, $1.nome);}

imprimir:
    PRINT_TOKEN ABRIR_PARENTESES_TOKEN expr FECHAR_PARENTESES_TOKEN {$$.np = criaNo(NULL, NULL, $1.nome);}

input:
    SCANF_TOKEN ABRIR_PARENTESES_TOKEN  FECHAR_PARENTESES_TOKEN {$$.np = criaNo(NULL, NULL, $1.nome);}

retornar:
    RETURN_TOKEN anyTipe {$$.np = criaNo($2.np,NULL, $1.nome);}
    | RETURN_TOKEN aritmetica {$$.np = criaNo($2.np,NULL, $1.nome);}

comment:
    COMMENT_TOKEN

%%

void yyerror(char *c){
    printf("\nErro ao compilar o código!\n Mais detalhes abaixo:");
    fprintf(stderr,"Erro na linha %d \n Tipo do erro: %s\n",yylineno,c);
    exit(0);
}

void inserir_tipo(TipoPrimitivo entrada) {
	tipo = entrada;
}

// Caso de erro 1 - Variável não declarada
void checar_declaracao(char* c){
    int simbl = simboloExiste(escopoAtual->tabela,strdup(c));
    if (simbl == 0){
        sprintf(errors[errosemantico], "Linha %d: Variável \"%s\" sendo utilizada antes de ser declarada!\n", yylineno, c);  
        errosemantico++;
    }
}

// Caso de erro 3 - Checagem de tipo
int checar_tipos(int tipoA,int tipoB){
    //printf("\n%d %d\n",tipoA,tipoB);
    if(tipoB == -1){
        sprintf(errors[errosemantico], "Linha %d: Aviso! Operações entre tipo(s) desconhecidos!: %s e %s \n", yylineno,retornaNomeTipoPrimitivo(tipoA),retornaNomeTipoPrimitivo(tipoB));  
        errosemantico++;
        return 0;
    }
    if (tipoA == tipoB){
        return 1;
    } else {
        sprintf(errors[errosemantico], "Linha %d: inconsistência de tipos! Entre: %s e %s \n", yylineno,retornaNomeTipoPrimitivo(tipoA),retornaNomeTipoPrimitivo(tipoB));  
        errosemantico++;
        return 0; 
    }
}

TipoPrimitivo get_tipo_Tabela(char* c){
    Simbolo* simbl = pegarSimbolo(escopoAtual->tabela,c);
    if (simbl == NULL){
        return T_DESCONHECIDO;
    } else{
        return simbl->tipo;
    }
}


void adicionar_tabela(char* nome,char c,TabelaDeSimbolos* tabela,TabelaDeSimbolos* global){
    int S = 0;
    S = simboloExiste(tabela,strdup(nome));
    //printf("\n%d\n",S);

    if(S == 0){
        if(c == 'v'){
            adicionaSimboloNaTabela(tabela, strdup(nome), tipo, T_VARIAVEL, yylineno);
            adicionaSimboloNaTabela(global, strdup(nome), tipo, T_VARIAVEL, yylineno);
        }
        else if(c == 'f'){
            adicionaSimboloNaTabela(tabela, strdup(nome), T_DESCONHECIDO, T_FUNCAO, yylineno);
            adicionaSimboloNaTabela(global, strdup(nome), T_DESCONHECIDO, T_FUNCAO, yylineno);
        }
        else if(c == 'c'){
            adicionaSimboloNaTabela(tabela, strdup(nome), tipo, T_CONSTANTE, yylineno);
            adicionaSimboloNaTabela(global, strdup(nome), tipo, T_CONSTANTE, yylineno);
        }
        else if(c == 'p'){
            adicionaSimboloNaTabela(tabela, strdup(nome), T_DESCONHECIDO, T_PALAVRACHAVE, yylineno);
            adicionaSimboloNaTabela(global, strdup(nome), T_DESCONHECIDO, T_PALAVRACHAVE, yylineno);
        }
        else {
            adicionaSimboloNaTabela(tabela, strdup(nome), T_DESCONHECIDO, T_DESCONHECIDO_TOKEN, yylineno);
            adicionaSimboloNaTabela(global, strdup(nome), T_DESCONHECIDO, T_DESCONHECIDO_TOKEN, yylineno );
        }
    } else if(c == 'v'){// Caso de erro 2 - Múltiplas declarações da mesma variável
        sprintf(errors[errosemantico], "Linha %d: Multiplas declarações da variável \"%s\"!\n", yylineno, strdup(nome));  
        errosemantico++;
    }
}

EscopoPonteiro aprofundarEscopo(EscopoPonteiro escopoAcima){
    EscopoPonteiro escp = criarEscopo(escopoAcima);
    return escp;
}

EscopoPonteiro voltarEscopo(EscopoPonteiro escopo){
    if(ImprimirFechamentoEscopo) {imprimirTabeladeSimbolos(escopo->tabela);}
    return escopo->prev;
}

int main(){
    tabelaGlobal = criaTabelaDeSimbolos();
    escopoAtual = criarEscopo(NULL);
    int i = 0;
    
    #ifdef YYDEBUG
    yydebug = 0;
    #endif
    yyparse();
    if (errosemantico >= 1){
        for(i=0;i<errosemantico;i++){
            printf("%s\n",errors[i]);
        }
    }

    printf("\n\nCódigo compilado com sucesso!\n\n");
    //printf("\n\n\n Tabela de Símbolos no Escopo Master:\n");
    //imprimirTabeladeSimbolos(escopoAtual->tabela);
    //printf("\n\n\n Tabela de Símbolos Global:\n");
    imprimirTabeladeSimbolos(tabelaGlobal);

    //printf("\n Árvore de Sintaxe Abstrata: \n\n");
    //printf(" ");
    //imprimirArvore(raiz);
    //printf("______________________________________________\n");

    return 0;
}

