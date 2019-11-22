#include<stdio.h>
#include<stdlib.h>

// -----------------------------
// ALOCAÇÃO DINÂMICA DE MEMÓRIA
// -----------------------------

int main(){

    // ======
    // MALLOC
    // ======
 
    // Alocando 10 posições para um ponteiro com malloc
    int* ptr = malloc(10 * sizeof *ptr);

    printf("Tamanho de Memória separado: %zu \n", sizeof *ptr * 10);

    for(int i = 0 ; i < 10 ; i++){ptr[i] = i;}

    for(int i = 0 ; i < 10 ; i++){printf("POS[%d] = %d \n", i, *ptr++);}

    // Liberando Memória
    // free(ptr);

    // ======
    // CALLOC
    // ======

    // Alocando 10 posições para um ponteiro
    int* nptr = calloc(10,sizeof *nptr);

    // Imprimindo todos os valores inicialmente 
    printf("Tamanho de Memória separado: %zu \n", sizeof *nptr * 10);
    for(int i = 0 ; i < 10 ; i++){printf("POS[%d] = %d \n", i , *nptr++);}

    // Liberando Memória
    //free(nptr);

    // =======
    // REALLOC
    // =======
    
    // como vai ser alocado, deve criar um novo ponteiro
    // int* teste = nptr;
    // int* teste = (int*) realloc(teste,30 * sizeof(int));
    // printf("Tamanho de Memória separado: %zu \n", sizeof *teste * 30);
    // for(int i = 0 ; i < 30 ; i++){printf("POS[%d] = %d \n", i , *teste++);}


}