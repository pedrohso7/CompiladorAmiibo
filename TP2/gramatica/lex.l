%{ 
    void yyerror(char *c);
    #include "y.tab.h" //Contém as definições do token, o YACC gera
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


{ws}		{/*nenhuma acao e nenhum retorno*/}
{eol} {return EOL_TOKEN;}
"Bug"       {return INT_TYPE;}
"Fossil"       {return FLOAT_TYPE;}
"SeaCreature"       {return STRING_TYPE;}
"Fish"       {return CHAR_TYPE;}
"Butterfly"       {return BOOLEAN_TYPE;}
"Tree"       {return DATE_TYPE;}
"Flower"       {return VECTOR_TYPE;}

"Mabel"       {return IF_TOKEN;}
"Sable"       {return ELSE_IF_TOKEN;}
"Label"       {return ELSE_TOKEN;}
"Orville"       {return FOR_TOKEN;}
"Wilbur"       {return WHILE_TOKEN;}
"Don"       {return CREATE_FUNC_TOKEN;}
"Pave"       {return PRINT_TOKEN;}
"Saharah"       {return SCANF_TOKEN;}
"Rover"       {return RETURN_TOKEN;}
"Brewster"       {return BREAK_TOKEN;}
"("       {return ABRIR_PARENTESES_TOKEN;}
")"       {return FECHAR_PARENTESES_TOKEN;}
"\{"       {return ABRIR_CHAVE_TOKEN;}
"\}"       {return FECHAR_CHAVE_TOKEN;}
"["       {return ABRIR_COLCHETE_TOKEN;}
"]"       {return FECHAR_COLCHETE_TOKEN;}
","       {return VIRGULA_TOKEN;}
"="       {return ATRIB_TOKEN;}
"//"[^\n]*   {return COMMENT_TOKEN;}

{data}       {return DATE;}
{inteiro}       {return INT;}
{decimal}     {return FLOAT;}
{string}       {return STRING;}
{char}       {return CHAR;}
{booleano}       {return BOOLEAN;}

">" {return RELACIONAL_MAIORQUE;}
"<" {return RELACIONAL_MENORQUE;}
">=" {return RELACIONAL_MAIORIGUAL;}
"<=" {return RELACIONAL_MENORIGUAL;}
"!=" {return RELACIONAL_NEGACAO;}
"not" {return RELACIONAL_NEGACAO;}
{igualigual} {return RELACIONAL_IGUALDADE;}
"and" {return RELACIONAL_AND;}
"or" {return RELACIONAL_OR;}

"+" {return MATEMATICO_SOMA;}
"-" {return MATEMATICO_SUBTRACAO;}
"*" {return MATEMATICO_MULTIPLICACAO;}
"/" {return MATEMATICO_DIVISAO;}
"%" {return MATEMATICO_MOD;}
{maisMais}    {return MATEMATICO_INCREMENTO;}
{menosMenos}  {return MATEMATICO_DECREMENTO;}
{vezesVezes}  {return MATEMATICO_POW;}

{variavel}    {return VAR_TOKEN;}



 
%%
