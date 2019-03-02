#include<stdio.h> //biblioteca de entrada e saida
int main(){
    //criando um vetor
    int vetor[10];
    int i;
    //enchendo o vetor 
    for(i = 0 ; i < 10 ; i++)
        vetor[i] = i;
    printf("notas[0] %.1d\n", vetor[0]);
}