#include <stdio.h>
#include <stdlib.h>

//programa para ler numeros de um arquivo

int main(){
    
    //Lendo o Arquivo texto

    FILE* fp = fopen("Arquivo.txt", "r");
    if(fp == NULL){
        printf("Erro! Arquivo não Encontrado!\n");
        exit(EXIT_FAILURE);
    }

    //Variavel com o Numero que sera armazenado
    int num;

    //Aqui e mostrado a leitura de um numero primeiro
    fscanf(fp, "%d", &num);
    printf("Primeiro Numero lido: %d\n", num);
    printf("Este numero depois de lido saira da leitura\n");
    
    //Abaixo esta a leitura de todos os outros numeros 
    //ele nao ira ler o primeiro porque ele ja foi lido

    printf("Lendo todo o Resto\n");
    while(fscanf(fp, "%d", &num) != EOF){
        printf("Numeros lidos: %d\n", num);
    }

    fclose(fp);
    return 0;
}