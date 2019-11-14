# Usando as Bases Numéricas

## Utilizando Bases Numéricas em C

Podemos utilizar um Inteiro em C na Base que quisermos, utilizando Prefixos Especificos:

* Se Deseja Armazenar em `Hexadecimal`, usamos o Prefixo:  `0x`
* Se deseja Armazenar em `Binário`, usamos o Prefico: `0b`
* Se deseja armazenar em `Decimal`, somente guarde o valor na Variavel

Esse sistema de Armazenamento do Binário Somente funciona na versão do **`GCC 4.7+`**

Exemplo:

```c
unsigned int var;

var = 254; //em Decimal
var = 0xFE; //em Hexadecimal
var = 0b111111110; //em Binário
```

**Saídas em C das Bases Numéricas**

Devemos usar modificadores especificos para que a Saída no printf seja do tipo de Base que desejamos

* Para que saia em Hexadecimal, devemos usar o modificador `%X` na Função `printf()`
* Para que saia em Decimal, devemos usar o modificador `%d` na Função `printf()`
* BINÁRIOS NÃO POSSUEM MODIFICADOR DE SAIDA

Exemplos:

```c
#include<stdio.h>

hexa = 0xFE;
dec = 254;


printf("Hexadecimal %X\n", hexa);
printf("Decimal %d\n", dec);
```

**Tamanhos em Bytes dos Tipos de Estrutura de Dados**

* Podemos saber o tamanho em Bytes dos tipos de dados usando a Função `sizeof()`

```c
#include<stdio.h>

printf("Inteiros: %d\n", sizeof(int));
printf("Char: %d\n", sizeof(char));
printf("Float: %d\n", sizeof(float));
printf("Double: %d\n", sizeof(double));
```

