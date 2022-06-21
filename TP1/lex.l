%{ 

/*...*/

%} 


%option noyywrap 

/*Declarações*/
delim		[ \t\n]
qualquerCoisa   \.|[^"]
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
opComparacao    ">"|"<"|">="|"<="|"!="|"=="
opLogico    "and"|"or"|"not" 
maisMais   [+]{2}
menosMenos   [-]{2}
opMatematico    [-\+\*\/\%]
variavel    {letra}{caractere}*



%% 


{ws}		{/*nenhuma acao e nenhum retorno*/} 
"Bug"       {printf("Foi encontrado um INT, %s\n", yytext);}
"Fossil"       {printf("Foi encontrado um FLOAT, %s\n", yytext);}
"SeaCreature"       {printf("Foi encontrado um STRING, %s\n", yytext);}
"Fish"       {printf("Foi encontrado um CHAR, %s\n", yytext);}
"Butterfly"       {printf("Foi encontrado um BOOL, %s\n", yytext);}
"Tree"       {printf("Foi encontrado um DATETIME, %s\n", yytext);}
"Flower"       {printf("Foi encontrado um ARRAY, %s\n", yytext);}
"Mabel"       {printf("Foi encontrado um IF, %s\n", yytext);}
"Sable"       {printf("Foi encontrado um ELSE IF, %s\n", yytext);}
"Label"       {printf("Foi encontrado um ELSE, %s\n", yytext);}
"Orville"       {printf("Foi encontrado um FOR, %s\n", yytext);}
"Wilbur"       {printf("Foi encontrado um WHILE, %s\n", yytext);}
"Don"       {printf("Foi encontrado um DEF, %s\n", yytext);}
"Pave"       {printf("Foi encontrado um PRINT, %s\n", yytext);}
"Saharah"       {printf("Foi encontrado um SCANF, %s\n", yytext);}
"Rover"       {printf("Foi encontrado um RETURN, %s\n", yytext);}
"Brewster"       {printf("Foi encontrado um BREAK, %s\n", yytext);}
{data}       {printf("Foi encontrado um data, %s\n", yytext);}
{inteiro}       {printf("Foi encontrado um valor inteiro, %s\n", yytext);}
{decimal}     {printf("Foi encontrado um valor decimal, %s\n", yytext);}
{string}       {printf("Foi encontrado uma string literal, %s\n", yytext);}
{char}       {printf("Foi encontrado um char, %s\n", yytext);}
{booleano}       {printf("Foi encontrado um valor booleano, %s\n", yytext);}
{opComparacao}   {printf("Foi encontrado um operador de comparação. LEXEMA: %s\n",yytext);}
{opLogico}      {printf("Foi encontrado um operador logico. LEXEMA: %s\n",yytext);}
{opMatematico}    {printf("Foi encontrado um operador matematico. LEXEMA: %s\n",yytext);}
{maisMais}    {printf("Foi encontrado um operador matematico. LEXEMA: %s\n",yytext);}
{menosMenos}    {printf("Foi encontrado um operador matematico. LEXEMA: %s\n",yytext);}
"("       {printf("Foi encontrado uma abertura de parentese, %s\n", yytext);}
")"       {printf("Foi encontrado um fechamento de parentese, %s\n", yytext);}
"\{"       {printf("Foi encontrado uma abertura de chave, %s\n", yytext);}
"\}"       {printf("Foi encontrado um fechamento de chave, %s\n", yytext);}
"["       {printf("Foi encontrado uma abertura de colchete, %s\n", yytext);}
"]"       {printf("Foi encontrado um fechamento de colchete, %s\n", yytext);}
","       {printf("Foi encontrado um separador, %s\n", yytext);}
{variavel}    {printf("Foi encontrado uma variavel. LEXEMA: %s\n",yytext);}
"//"[^\n]*   {printf("Foi encontrado um comentario. LEXEMA: %s\n",yytext);}
 
%% 

int main(void) 
{ 
    /* Call the lexer, then quit. */ 
    yylex(); 
    return 0; 
}