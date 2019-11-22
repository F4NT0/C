#include<stdio.h>
#include<stdlib.h>

int main(){

    // INICIANDO AS LINHAS DA MATRIZ
    int** mat = malloc(5 * sizeof(int*));

    // INICIANDO AS COLUNAS DA MATRIZ
    for(int i=0; i<5; i++){
        mat[i] = malloc(5 * sizeof(int));
    }

    // PREENCHENDO A MATRIZ

    int valor = 0;

    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            mat[i][j] = valor;
            valor++;
        }
    }

    // LENDO A MATRIZ

    printf("Todas as Colunas da Linha 0: \n");
    for(int i = 0 ; i < 5 ; i++){
        printf("[0][%d] = %d \n",i,mat[0][i]);
    }


    // LIBERANDO A MEMÓRIA
    for(int i = 0 ; i < 5 ; i++)
        free(mat[i]);
    free(mat);

}