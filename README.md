![amiibo](https://user-images.githubusercontent.com/32853995/195695431-6a0bd058-6c78-48a9-bda4-f85b63dcd22f.png)


<div align="center">
          
<a href="https://github.com/pedrohso7/CompiladorAmiibo/issues"><img alt="GitHub issues" src="https://img.shields.io/github/issues/pedrohso7/CompiladorAmiibo"></a> <a href="https://github.com/pedrohso7/CompiladorAmiibo/stargazers"><img alt="GitHub stars" src="https://img.shields.io/github/stars/pedrohso7/CompiladorAmiibo"></a>
</div>
          
<p align="center">
  <a href="#-o-projeto">O projeto</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-tecnologias">Tecnologias</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-detalhes-do-compilador">Detalhes do compilador</a>
  &nbsp;&nbsp;&nbsp;|&nbsp;&nbsp;&nbsp;
  <a href="#-como-usar">Como Usar</a>
</p>

## ✦ O projeto
<p align="justify">
O projeto se trata de um compilador criado pelos colaboradores para uma linguagem de programação também pensada por nós chamada Amiibo.
O trabalho foi concebido com a finalidade de estudar um compilador utilizando ferramentas geradoras da área confecionado pelos alunos:
</p>

<ul>
  <li>Estela Miranda Batista</li>
  <li>Pedro Oliveira</li>
  <li>Eduardo Vinícius</li>
  <li>João Marcos Alves</li>
  <li>Mariana Souza</li>
</ul>

<p align="justify">
O projeto era incremental, logo, a pasta TP3 do repositório é o trabalho cujo todas as etapas do compilador que foram implementadas. O repositório acompanha a documentação do projeto, como funciona, etc.
</p>

## ✦ Tecnologias
O compilador foi confeccionado utilizando as seguintes tecnologias:
- [Lex](https://www.javatpoint.com/lex)
- [Yacc](https://pt.wikipedia.org/wiki/Yacc)
- [C](https://en.wikipedia.org/wiki/C_(programming_language))

## ✦ Detalhes do compilador
<p align="justify">
Primeiro é necessário entender as fases de um compilador:
</p
          
<p align="middle">
<img alt="Fases do compilador" title="App" src="https://user-images.githubusercontent.com/32853995/195723459-4ab02b7b-eebf-4bc9-bbe0-d10b8225baf0.png" width="1000"/>
</p>
<!-- 
<p align="center">
<img alt="Fases do compilador" title="App" src="https://user-images.githubusercontent.com/32853995/195723459-4ab02b7b-eebf-4bc9-bbe0-d10b8225baf0.png" width="800"/>
</p> -->

<h4>Analisador Léxico</h4>

<p align="justify">
A primeira fase do compilador é chamado de **Análise Léxica** ou **escaneamento**. Ele lê a a sequência de caracteres do código fonte e constrói, a partir dele, um outro código transformado em sequências com significado chamados de **lexemas** e salva na **tabela de símbolos*. Essa etapa garante que erros léxicos não se propaguem para as próximas etapas, ou seja, todos os tokens gerados deverão ser tokens válidos para nossa linguagem, caso contrário um erro léxico será apontado.

Para cada Lexema o analisador léxico produz um **token** de saída na forma:
</p>

```
<token-name attribute-value>
```

Para confeccionar esse analisador foi utilizado o Lex, um gerador de analisador léxico baseado nos lexemas definidos por nós.


<h4>Tabela de símbolos</h4>

<p align="justify">
São estruturas de dados usadas pelos compiladores para conter informações sobre os tokens do programa fonte. As entradas na tabela de símbolos
contêm informações sobre um identificador, como seu nome/lexema, seu tipo, seu endereço na memória, seu escopo, linha de ocorrência, etc. No nosso caso, foi criada uma estrutura em C, utilizada nas ferramentas geradoras para salvar os tokens cujo a estrutura é a de uma lista encadeada (para mais detalhes, abra a documentação e se delicie).
</p>
          
<h4>Analisador Sintático</h4>

<p align="justify">
Durante essa análise, verifica-se a ordem de disposição dos tokens para saber se os tokens, apesar de serem válidos, fazem sentido na referida linguagem. Primeiro constrói-se a árvore sintática do código analisado e verifica se essa é uma árvore sintática válida, ou seja, uma produção válida da linguagem. Se a árvore for válida, o código não apresenta erros sintáticos. Para isso, criamos uma árvore binária que a cada produção da gramática desse código fonte insere um novo nó (para mais detalhes, abra a documentação e se delicie).
</p>

<h4>Analisador Semântico</h4>

<p align="justify">
A última etapa de análise se trata de discriminar essa árvore sintática, ou seja, se essa construção da árvore, apesar de ser válida, se faz sentido semanticamente para a linguagem. Isto é, analisa-se os tokens da árvore através do escopo de acesso ou tipos das variáveis, visibilidade, etc. Como a estrutura da árvore sintática, tabela de símbolos e escopo "a essa altura" já foram criados, bastou realizar as devidas verificações restantes.
  
Para confeccionar esses dois últimos analisadores foi utilizado o Yacc, um gerador de analisador sintático/semântico que utiliza trecho de códigos em C para auxiliar, por exemplo, a organizar os dados em estrutura de árvore, tabelas e etc, permitindo a nós replicar o comportamento de um compilador nessas fases do projeto.
</p>

<h4>Gerador de código intermediário</h4>

<p align="justify">
Aqui o código fonte será transformado em um código mais próximo do programa objeto, ou seja, mais próximo do que um computador consegue executar. Existem duas representação intermediárias, sendo elas as árvores (árvore sintática, por exemplo) e as representações lineares, como os códigos de três endereços. Para essa etapa, optamos por implementar o código de três endereços.
</p>

<h4>Gerador de código de máquina</h4>

<p align="justify">
A partir do código intermediário gerado, iremos fazer a tradução do mesmo para um formato interpretável pelo computador.
</p>

## ✦ Como usar
<p align="justify">
Para rodar o compilador, primeiro você precisa ter um código baseado na linguagem Amiibo. Na pasta gramatica temos exemplos utilizáveis mas você pode alterá-los como quiser. Dito isto, basta rodar o comando abaixo, garantindo que você está na pasta TP3 no terminal:
</p>

```
make all <nome_do_arquivo_de_entrada>
```

<p align="justify">
A saída será no próprio terminal.
</p>

## ✦ Comece a estudar

<p align="justify">
Vá em frente, clone e estude o nosso projeto!!
</p>
