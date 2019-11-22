#include<stdio.h>

// ---------------------------------------------
// PROGRAMA DE EXEMPLO DE CONSTRUÇÃO DE VETORES
// ---------------------------------------------

// ############## TEORIA #################
// Vetores sempre são passados por Referência(vetor é um ponteiro para endereços de memória)
// Acessamos as posições por Aritmética de ponteiros, mostrado mais abaixo


// PROTÓTIPO DE FUNÇÃO PARA TESTE DE PASSAGEM DE REFERÊNCIA
void mult(int* vetor , int tamanho);

// FUNÇÃO
void mult(int* vetor , int tamanho){
    for(int i = 0 ; i < tamanho ; i++){
        vetor[i] = vetor[i] * vetor[i];
    }
}

// MAIN
int main(){

    // ============================================
    // TESTE DE PASSAGEM POR PARÂMETRO DE UM VETOR
    // ============================================

    // Vetor já completo
    int vetor_completo[10] = {0,1,2,3,4,5,6,7,8,9};

    // Imprimindo a posição 5
    printf("Valor Pos 5: %d \n", vetor_completo[5]);

    // Testando a Função, passando o vetor, que é uma variavel de ponteiro
    mult(vetor_completo,10);

    // Imprimindo a posição 5 depois da função
    printf("Valor Pos 5: %d \n", vetor_completo[5]);

    printf("\n\n\n");

    // ===============================================================
    // TESTE DE VERIFICAÇÃO DO ESPAÇO DE MEMÓRIA SEPARADO PARA O VETOR
    // ===============================================================

    // Verificando o espaço de memória separado para ele
    int nro_bytes = sizeof(int)*10;

    // sizeof() cria um valor do tipo Long Unsigned Int, usamos %lu na saída
    printf("Qual o tamanho de um tipo inteiro: %lu bytes \n", sizeof(int));
    
    // O espaço de memória total separado para o vetor vetor_completo
    printf("Tamanho do espaco de memoria do vetor: %d bytes \n", nro_bytes);


    printf("\n\n\n");

    // ============================================
    // TESTE DE ACESSO VIA ARITMÉTICA DE PONTEIROS
    // ===========================================

    // Agora iremos criar um vetor novo
    int vetor[10] = {0,1,2,3,4,5,6,7,8,9};

    // Criar um ponteiro para o vetor
    int* pv = vetor; // vetores já são ponteiros

    // Acessando cada posição de memória e pegando seus valores na mão
    printf("Vetor na forma Inicial manual \n");
    printf("%d | %d | %d | %d | %d | %d | %d | %d | %d | %d \n\n",*pv,*(pv+1),*(pv+2),*(pv+3),*(pv+4),*(pv+5),*(pv+6),*(pv+7),*(pv+8),*(pv+9));

    // Acessando cada posição com um for e imprimindo como acima
    printf("Vetor na forma Inicial com um For \n");
    for(int i = 0 ; i < 10 ; i++){
        printf(" %d |", *(pv+i));
    }
    printf("\n");

    printf("\n\n\n");

}