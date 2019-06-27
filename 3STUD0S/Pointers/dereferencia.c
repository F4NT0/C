#include<stdio.h>

/*------------------------------------------
    TESTE DO OPERADOR DE DEREFERENCIA EM C
------------------------------------------*/

int main(){
    int a = 10; // variavel inteira armazenado em um espaço de memoria
    int* b = &a; //Ponteiro da variavel a

    printf("---------------------------------\n");
    printf("TESTE DO OPERADOR DE DEREFERENCIA\n");
    printf("---------------------------------\n\n");

    printf("VALOR DA VARIAVEL A: %d\n",a);
    printf("PONTEIRO PARA A VARIAVEL A: %p\n",b);
    printf("VALOR DA VARIAVEL A USANDO B: %d\n",*b);
}