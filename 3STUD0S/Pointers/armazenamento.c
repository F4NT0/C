#include<stdio.h>

/*-------------------------------------------------------------------
    TESTANDO O ARMAZENAMENTO DO VALOR DE UM PONTEIRO EM UMA VARIAVEL
--------------------------------------------------------------------*/

int main(){
    int valor = 200; // VALOR INTEIRO DE TESTE
    int* ponteiro = &valor; // É UM PONTEIRO PARA UM VALOR INTEIRO

    char teste = 'a'; // CARACTERE DE TESTE
    char* ponteiroTeste = &teste; // PONTEIRO PARA UM CARACTERE CHAR

    printf("\n\n/*-------------------------------------------------------------------\n");
    printf("    TESTANDO O ARMAZENAMENTO DO VALOR DE UM PONTEIRO EM UMA VARIAVEL\n");
    printf("--------------------------------------------------------------------*/\n\n");

    printf("------------------------------------------------------\n");
    printf("VALOR INTEIRO TESTE: %d\n",valor);
    printf("PONTEIRO PARA O VALOR INTEIRO: %p\n",ponteiro);
    printf("VALOR DE CARACTERE DE TESTE: %c\n",teste);
    printf("PONTEIRO PARA O CARACTERE ARMAZENADO: %p\n",ponteiroTeste);
    printf("------------------------------------------------------\n");

}