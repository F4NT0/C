## INTRODUÇÃO A LINGUAGEM C

* Chamada de Bibliotecas

```C
#include<stdio.h> //esta biblioteca possui várias funções de entrada e saída de C
#include<math.h> //esta biblioteca possui as funções matemáticas
#include<stdlib.h> //esta biblioteca possui funções básicas de C
#include<string.h> //esta biblioteca se pode usar strings
```

* Tipos de Dados em C

```C

```


* Métodos uteis da biblioteca stdio.h

```C
scanf() //entrada de dados no programa
printf() //saida de dados do programa

//exemplos
int i; //variavel do tipo inteiro
scanf("%d", &i); //%d significa que vai entrar um dado inteiro
//&i quer dizer que o dado vai ser armazenado na variavel i
printf("%d", i); //irá sair o valor armazenado na variavel i
```

* Tipos de Modificadores de Formato de printf/scanf

FORMATO|SAÍDA
---|---
%d | Inteiro com Sinal
%u | Inteiro sem Sinal
%f | Ponto flutuante(double ou float)
%c | Caractere
%s | array de chars(String)

* VETORES E MATRIZES
```C
//VETORES

//vetores armazena valores de um mesmo tipo
//como é construido um array:
int vetor[10]; //vetor de inteiros com 10 posições de 0 á 9
char vetor[20]; //vetor de caracteres de 20 posições de 0 á 19

//colocando valores dentro do vetor
//precisamos usar um for para poder encher o vetor
int vetor[10];
for(i=0; i < 10; i++) //colocamos o valor de i dentro do vetor
    vetor[i] = i; //o valor da posição é o valor do i que será colocado

//como fica o vetor: [0,1,2,3,4,5,6,7,8,9] 

//MATRIZES

//matrizes são vetores de mais de uma dimensão
int matriz[4][4]; //uma matriz 4x4 com 16 inteiros
//definindo o valor dentro da matriz:
matriz[0][0] = a
matriz[1][0] = b
matrix[2][0] = c
.
.
.
```
  * Como a matriz fica visualmente:

0|1|2|3
-|-|-|-|
0|a|b|c
1|
2|
3|




