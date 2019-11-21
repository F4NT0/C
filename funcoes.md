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

### Passagem de Parâmetros

* **Parâmetros** são as variáveis ou objetos que são necessários para uma função e podemos fazer várias coisas interessantes com elas.

Os parâmetros são passados para uma função de acordo com a sua posição, ou seja:

* Quando colocamos os parâmetros na construção da Função, chamamos eles de **Parâmetros Formais**.
* Quando usamos variáveis como parâmetros na hora de usar a função, chamamos de **Parâmetros reais.**

**Parâmetros Formais** aparecem no Protótipo e em toda a construção da Função, eles existem para que quando for usado a função se saiba onde cada variável vai ser utilizada.

```c
// Protótipo
int soma(int a , int b); // a e b são Parâmetros Formais

// Função
int soma(int a, int b){
    // os parâmetros a e b são usados dentro da função
    // quando a função for usada , viram os valores das variaveis
    return a + b;
}
```

**Parâmetros reais** são os valores que serão pegos de variáveis ou adicionados na mão que serão usados na hora que o programa for rodado, alterando as posições que antes eram parâmetros formais.

```c
// Colocando os valores e vendo como roda

// usando:
int valor1 = 2;
int valor2 = 4;
int result = soma(valor1,valor2);

// o que está fazendo

 int soma(valor1, valor2){
     return valor1 + valor2;
 }
```

Agora com isso explicado vou explicar o que é Passagem de Parâmetros.

#### Tipo 1: Passagem por valor

Quando armazenamos valores dentro de variáveis podemos fazer inúmeras coisas com esses valores sem o medo de perder os dados guardados.

na Passagem de Parâmetros por valor, chamamos as variáveis como parâmetro na hora de usar a função, onde dentro da função ele usa os valores previamente guardados sem fazer qualquer modificação dentro das variáveis usadas.

Exemplo completo:

```c
// Função
int soma(int a , int b){
    return a + b;
}

// Variáveis
int valor1 = 2;
int valor2 = 4;

// Chamando a função no método main
int result = soma(valor1,valor2);

// O que acontece dentro da função
int soma(2,4){ // pega os valores dentro das variaveis
    return 2 + 4;
}

// O que ele armazena
int result = 6;
```

#### Tipo 2: Passagem por Referência

Diferente da passagem por valor, nesse caso ele não vai passar o valor de uma variável e sim a **referência** á aquela variável.

Isto é um dos casos que diferencia a linguagem C de outras linguagens, nesse momento iremos discutir sobre **Ponteiros,** pelo menos de inicio.

As alterações feitas nos parâmetros da função afetam as variáveis que foram usadas, podendo alterar os valores delas. Nós não usamos as variáveis com o valor iniciado mas as variáveis que são ponteiros, onde fica armazenado o endereço de memória da variável de valores.

Exemplo de uma variável de ponteiro

```c
// Variavel com o valor
int valor = 10;

// Variavel Ponteiro com o endereço de memória de valor
int* ponteiro_valor = &valor;
```

* Usamos o simbolo **&** para pegar o endereço de memória de uma variável
* Usamos o simbolo **\*** para duas coisas:
  * quando colocado a direita de um tipo de dados\(ex: int\* \) estamos criando uma variável de ponteiros que vai **Receber** um endereço de memória.
  * quando colocado a esquerda do nome de uma variável de ponteiros\(ex: \*var \) estamos acessando o valor do endereço de memória gravado nessa variável de ponteiros.

Exemplo completo:

* No caso abaixo, estamos pegando o endereço de memória de uma variável e alterando o valor dela.
* É uma multiplicação com o valor de uma variável usando a referência da memória dela, ou seja, alterando o valor na memória da variável

```c
// Protótipo
void mult(int* valor); // irá chamar uma var de ponteiros

// Função
void mult(int* valor){
    *valor = *valor * *valor; // multiplica e armazena 
}

// Função main
int main(){
    // Variável que iremos mudar o valor
    int valor = 10;
    
    // Ponteiro para a o endereço de memória de valor
    int* ponteiro = &valor;
    
    // Fazendo o cálculo da função void
    mult(ponteiro);
    
    //Verificando o valor
    printf("Valor da variavel: %d \n", valor);
}
```

* Por fim, todas as linguagens de alto nível sempre trabalham com **PASSAGEM DE VALOR** mas a Linguagem C possui também a opção de ser por **PASSAGEM POR REFERÊNCIA.**

