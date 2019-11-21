# Funções

As funções em C funcionam como funções em qualquer linguagem de programação, mas ela possui interações e opções diferentes do que funções normais de linguagens de Alto nível.

### O que é uma Função

Sendo Teórico, **Funções** são segmentos de programa independente que executa uma tarefa específica podendo ser reutilizada quantas vezes precisar.

Abaixo tem um exemplo de uma Função que faz somas de dois valores de entrada e retorna o resultado:

```c
// Função em C
int soma(int a , int b){
    return a + b;
}
```

Para criar funções é preciso primeiro dizer o que ele vai entregar, dizendo a estrutura que ele  vai entregar:

| Tipo de Estrutura | O que entrega |
| :--- | :--- |
| void | Utilizado quando criamos funções que não retornam nenhum valor externo |
| int | Utilizado quando a função irá retornar um valor inteiro |
| float | Utilizado quando a função irá retornar um valor de Ponto Flutuante\(ex: 3,6\) |
| char | Utilizado quando a função irá retornar um valor do tipo Caractere\( ex: 'a' \) |

No caso acima, como estamos fazendo a soma de dois valores inteiros a função vai entregar um valor inteiro.

A palavra **return** serve para transmitir externamente aquele valor, assim nesse caso dessa função podemos armazenar o valor do resultado da soma em uma variável.

Uma definição de função **não pode** estar dentro de outra,porque elas são independentes uma da outra

Exemplo de uso dessa Função:

```c
// Usando a Função
int main(){
 // Variáveis
 int a;
 int b;

 // Entrada dos valores
 printf("Digite o valor 1: ");
 scanf("%d", &a);
 printf("Digite o valor 2: ");
 scanf("%d", &b);
 
 // Saida do Resultado
 int resultado = soma(a,b);
 printf("Resultado da soma: %d", resultado);  

}
```

### A função Main

A função principal de um programa em C é a **Main,** Esta é a função que será lida pelo programa e irá apresentar os resultados, podemos criar várias funções e iremos utilizar elas dentro da Função main, como mostrado no exemplo anterior.

A função Main é chamada de função Obrigatória.

### Protótipos

Esta parte também é muito importante quando falamos de Modularização, que iremos falar a seguir.

* **Protótipos** é o cabeçalho de uma Função, onde é apresentado:
  * tipo do retorno da função
  * nome da função
  * parâmetros necessários da função

A ideia do protótipo é avisar ao programa que irá existir uma função com aquelas informações dentro do programa, sem precisar criar ainda antes da função main.

Os protótipos ou ficam no inicio do arquivo main ou em um arquivo _header_ que será explicado na Modularização

Exemplo de Protótipo:

```c
// Função de Soma
int soma(int a , int b){
    return a + b;
}

// Protótipo da Função de Soma
int soma(int a , int b);
```

Caso uma função não seja definida antes da Função principal Main ela obrigatoriamente precisa de um Protótipo para avisar ao programa que essa função vai existir.

### Exemplo Completo de Função

Exemplo completo de Funções, caso queira testar esse mesmo exemplo se encontra neste Repositório no Diretório `functions`

```c
#include<stdio.h>

// Protótipos

int soma(int a, int b);
int sub(int a, int b);

// Funções

int soma(int a , int b){
    return a + b;
}

int sub(int a , int b){
    return a - b;
}

// Função Main

int main(){
    // Variáveis
    int a;
    int b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a); // Entrada 1
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b); // Entrada 2
    
    int result_soma = soma(a,b); // soma
    int result_sub = sub(a,b); // sub
    
    printf("Soma: %d \n", result_soma);
    printf("Sub: %d \n", result_sub);
}
```

