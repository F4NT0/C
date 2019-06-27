#include<stdio.h>

/*--------------------------------
    TESTE DE FALHA DE SEGMENTAÇÃO
---------------------------------*/


int main(){
    int a = 10;
    int* b;

    printf("-----------------------------\n");
    printf("TESTE DE FALHA DE SEGMENTAÇÃO\n");
    printf("-----------------------------\n\n");

    printf("FOI CRIADO UM PONTEIRO SEM ATRIBUIR UM VALOR, PORTANTO: \n");
    printf("%d",*b); //VAI SAIR UMA MENSAGEM DE ERRO


}