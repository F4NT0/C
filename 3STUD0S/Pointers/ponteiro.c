#include<stdio.h>

// -----------------
// TESTE DE PONTEIRO
// -----------------

int main(){
    // Criando uma Variável
int valor = 3;

// Criando o Ponteiro
int* ponteiro = &valor;

// Apresentando o Endereço de Memória
printf("Endereço de Memória do valor: %p \n", ponteiro);
// Exemplo de Endereço: 

// Imprimindo os valores
printf("Valor vindo da variavel: %d \n", valor); // 3
printf("Valor vindo do ponteiro: %d \n", *ponteiro); // 3

}