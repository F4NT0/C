#include<stdio.h>

/*-------------------------------------
    TESTE DE SAIDA DO LOCAL DE MEMÓRIA
--------------------------------------*/

int main(){
    printf("-------------------------------------------\n");
    printf("TESTANDO LOCAL DE MEMORIA DE UMA VARIAVEL\n");
    printf("-------------------------------------------\n\n");

    int teste = 200;

    printf("VALOR DA VARIAVEL: %d\n\n",teste);
    printf("VALOR DA POSICAO DE MEMORIA: %p\n\n",&teste);

}
