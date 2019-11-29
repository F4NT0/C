#include<stdio.h>

/*************************************************************************
    Este exercício tem o intuito de desenvolver duas
    funções que:
    1. A função Le() pega uma variavel e controla a entrada de valor
    2. A função Imprime() pega uma frase e o ponteiro e imprime na tela
*************************************************************************/


// Protótipos
void Le(float* f);
void Imprime(char* frase, float* ponteiro);


// Funções
void Le(float* f){
    scanf("%f", f);
}

void Imprime(char* frase, float* ponteiro){
    // Opção por passagem de referência
    //for(int i = 0 ; i < 11 ; i++){printf("%c", *(frase++));}

    // Opção mais comum
    printf("%s", frase);
    printf(" %f \n", *ponteiro);
}

int main(){
    float f;
    float *ptrf;

    ptrf = &f;

    Le(&f);
    Imprime("O valor eh:", ptrf);
    return 0;
}