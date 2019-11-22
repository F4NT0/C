#include<stdio.h>

// ------------------
// TESTE DE PONTEIROS 
// -------------------

int main()
{
    printf("Pega o primeiro valor e soma 1: \n\n ");
    int vet[] = { 4, 9, 12 };
    int i, *ptr;
    ptr = vet;
    for(i =0; i<3; i++)
        printf("%d ", (*ptr)++); //imprime: pega os proximos valores do primeiro valor(soma 1)
    
    printf("\n\nPega os valores nas posicoes do vetor: \n\n");
     int vet2[] = { 4, 9, 12 };
    int j, *ptr2;
    ptr2 = vet2;
    for(j =0; j<3; j++)
        printf("%d \n", *ptr2++); //imprime: pega os valores de cada posição do vetor
    return 1;


}