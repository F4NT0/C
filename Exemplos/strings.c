#include<stdio.h>
#include<string.h>

int main()
{
    //Atributos
    char nome[] = "fanto"; //colocamos a string direto no Vetor
    char nome2[6] = {'p','e','d','r','o','\0'};
    int i;
    
    //vamos usar a função strlen() do pacote string.h

    for(i = 0 ; i < strlen(nome) ; i++){
        printf("%c na posicao %u \n", nome[i],i);
    }
}