# Ponteiros

{% page-ref page="./" %}

Cada variavel na linguagem C e armazenada em um local na memoria.

Usamos o operador **&** para poder pegar o endereco da memoria, ja vimos este operador quando usamos a funcao **scanf\(\)** para poder guardar a informacao de entrada dentro de uma variavel especifica.

Diferente do scanf\(\) ,no caso iremos usar o **&** para pegar o endereco de memoria de uma variavel.

Iremos pegar esse endereco de memoria de uma variavel e iremos armazenar em outra, isso e o que chamam de **Ponteiros.**

Definicao de **Ponteiros:** Uma variavel que armazena um endereco de memoria \(usualmente de outra variavel\), utilizamos o simbolo **\*** junto com a variavel, como mostrado abaixo:

Para sair o valor pelo Terminal utilizamos o Modulo **%p** para imprimir o Ponteiro.

```c
#include<stdio.h>

// Criando uma Variavel
int teste;

// Colocando um valor dele com scanf()
printf("Entre um valor inteiro: ");
scanf("%d", &teste);

// Pegando o valor do ponteiro da variavel
int* ponteiro = &teste;

// imprimir a posicao de memoria
printf("Valor da posicao: %p" , ponteiro);
```

