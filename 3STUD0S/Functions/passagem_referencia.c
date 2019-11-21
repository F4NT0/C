#include<stdio.h>

// ===================================
// EXEMPLO DE PASSAGEM POR REFERÊNCIA
// ===================================

// ########################### TEORIA ###########################
// Salvamos o endereço da memória de uma variável em um Ponteiro
// Utilizamos o ponteiro na Função e salvamos o valor na variável


// PROTÓTIPO
void mult(int* ponteiro);

// FUNÇÃO
void mult(int* ponteiro){
    *ponteiro = *ponteiro * *ponteiro; // Usa o valor do endereço de memória chamado
}

// MAIN
int main(){
    
    // Variável normal iniciada
    int valor;

    // Entrando um valor para a variável
    printf("Digite um valor para teste: ");
    scanf("%d", &valor); //Pega o valor da entrada e salva ele na variavel valor

    // Ponteiro
    int* ponteiro_valor = &valor; //Pegando o endereço do ponteiro

    // Testes
    printf("Valor entrado: %d \n", valor);
    printf("Endereco de Memoria da variavel: %p \n", &valor);
    printf("Qual valor o ponteiro esta guardando: %d \n", *ponteiro_valor); //asterisco a esquerda, pega o valor

    // Utilizando a Função e alterando o valor da Variável valor
    mult(ponteiro_valor);

    // Verificando o novo valor da variável
    printf("Resultado: %d \n", valor);
}
