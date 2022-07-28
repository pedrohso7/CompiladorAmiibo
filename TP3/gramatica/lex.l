%{ 
    void yyerror(char *c);
    #include "y.tab.h" //Contém as definições do token, o YACC gera
   
    #define RED     "\x1b[31m"
    #define BLACK     "\033[38;5;0m"
    #define HIGHPINK "\033[38;5;13m"
    #define ROSERED "\033[38;5;160m"
    #define GREEN   "\x1b[32m"
    #define YELLOW  "\x1b[33m"
    #define BLUE    "\x1b[34m"
    #define DEEPBLUE "\033[38;5;21m"
    #define AQUABLUE "\033[38;5;45m"
    #define LEAFGREEN "\033[38;5;40m"
    #define HIGHBLUE "\033[38;5;12m"
    #define GRAY    "\033[38;5;8m"
    #define ORANGE  "\033[38;5;94m"
    #define PINK    "\033[38;5;206m"
    #define MAGENTA "\x1b[35m"
    #define CYAN    "\x1b[36m"
    #define RESET   "\x1b[0m"
%} 

%option noyywrap 
%option yylineno


/*Declarações*/
delim		[ \t]
qualquerCoisa   \.|[^"]
eol [\n]
ws		{delim}+
caractere   [a-zA-Z0-9]
letra   [a-zA-Z]
digito   [0-9]
booleano    "false"|"true"
inteiro    [-\+]?{digito}+
decimal    [-\+]?{digito}+\.{digito}+
string   \"{qualquerCoisa}{qualquerCoisa}+\"
char    \"{qualquerCoisa}\"
data    {digito}{2}\/{digito}{2}\/{digito}{4}
maisMais   [+]{2}
menosMenos   [-]{2}
vezesVezes   [*]{2}
igualigual [=]{2}
variavel    {letra}{caractere}*



%% 

 /* Tokens de fim de linha e ignorar espaço */
{ws}		                           {/*nenhuma acao e nenhum retorno*/}
{eol}                              {printf("\n%d\t",yylineno); strcpy(yylval.NoObjeto.nome,(yytext)); return EOL_TOKEN;}

 /* Tokens de declarações de tipos */ 
"Bug"                              {if(yylineno==1) printf("%d\t",yylineno++); printf(RED"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return INT_TYPE;}
"Fossil"                           {if(yylineno==1) printf("%d\t",yylineno++); printf(BLACK"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FLOAT_TYPE;}
"SeaCreature"                      {if(yylineno==1) printf("%d\t",yylineno++); printf(AQUABLUE"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return STRING_TYPE;}
"Fish"                             {if(yylineno==1) printf("%d\t",yylineno++); printf(HIGHBLUE"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return CHAR_TYPE;}
"Butterfly"                        {if(yylineno==1) printf("%d\t",yylineno++); printf(HIGHPINK"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return BOOLEAN_TYPE;}
"Tree"                             {if(yylineno==1) printf("%d\t",yylineno++); printf(LEAFGREEN"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return DATE_TYPE;}
"Flower"                           {if(yylineno==1) printf("%d\t",yylineno++); printf(ROSERED"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return VECTOR_TYPE;}

 /* Comandos da linguagem  */
"Mabel"                            {if(yylineno==1) printf("%d\t",yylineno++); printf(BLUE"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return IF_TOKEN;}
"Sable"                            {if(yylineno==1) printf("%d\t",yylineno++); printf(ORANGE"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ELSE_IF_TOKEN;}
"Label"                            {if(yylineno==1) printf("%d\t",yylineno++); printf(MAGENTA"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ELSE_TOKEN;}
"Orville"                          {if(yylineno==1) printf("%d\t",yylineno++); printf(CYAN"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FOR_TOKEN;}
"Wilbur"                           {if(yylineno==1) printf("%d\t",yylineno++); printf(CYAN"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return WHILE_TOKEN;}
"Don"                              {if(yylineno==1) printf("%d\t",yylineno++); printf(PINK"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return CREATE_FUNC_TOKEN;}
"Pave"                             {if(yylineno==1) printf("%d\t",yylineno++); printf(GREEN"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return PRINT_TOKEN;}
"Saharah"                          {if(yylineno==1) printf("%d\t",yylineno++); printf(YELLOW"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return SCANF_TOKEN;}
"Rover"                            {if(yylineno==1) printf("%d\t",yylineno++); printf(DEEPBLUE"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RETURN_TOKEN;}
"Brewster"                         {if(yylineno==1) printf("%d\t",yylineno++); printf(GRAY"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return BREAK_TOKEN;}
"main"                             {if(yylineno==1) printf("%d\t",yylineno++); printf(GRAY"%s "RESET,yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MAIN_TOKEN;}


 /*  Tokens de caractéres em geral */
"("                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ABRIR_PARENTESES_TOKEN;}
")"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FECHAR_PARENTESES_TOKEN;}
"\{"                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ABRIR_CHAVE_TOKEN;}
"\}"                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FECHAR_CHAVE_TOKEN;}
"["                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ABRIR_COLCHETE_TOKEN;}
"]"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FECHAR_COLCHETE_TOKEN;}
","                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return VIRGULA_TOKEN;}
"="                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return ATRIB_TOKEN;}
"//"[^\n]*                         {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return COMMENT_TOKEN;}

  /* Tokens dos tipos */
{data}                             {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return DATE;}
{inteiro}                          {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return INT;}
{decimal}                          {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return FLOAT;}
{string}                           {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return STRING;}
{char}                             {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return CHAR;}
{booleano}                         {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return BOOLEAN;}

 /* Tokens dos operadores relacionais */
">"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_MAIORQUE;}
"<"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_MENORQUE;}
">="                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_MAIORIGUAL;}
"<="                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_MENORIGUAL;}
"!="                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_NEGACAO;}
"not"                              {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_NEGACAO;}
{igualigual}                       {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_IGUALDADE;}
"and"                              {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_AND;}
"or"                               {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return RELACIONAL_OR;}

 /* Tokens dos operadores matemáticos */
"+"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_SOMA;}
"-"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_SUBTRACAO;}
"*"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_MULTIPLICACAO;}
"/"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_DIVISAO;}
"%"                                {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_MOD;}
{maisMais}                         {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_INCREMENTO;}
{menosMenos}                       {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_DECREMENTO;}
{vezesVezes}                       {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return MATEMATICO_POW;}


 /* Token para a nomeclatura de variáveis */
{variavel}                         {if(yylineno==1) printf("%d\t",yylineno++); printf("%s ",yytext); strcpy(yylval.NoObjeto.nome,(yytext)); return VAR_TOKEN;}



 
%%
