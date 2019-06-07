#include <stdio.h>
#include <stdlib.h>

//programa para pegar as palavras uma a uma do Arquivo

int main(){

    //Abrindo um arquivo

    FILE* fp = fopen("Arquivo.txt", "r");
    if(fp == NULL){
        printf("Erro! Arquivo não encontrado!\n");
        exit(EXIT_FAILURE);
    }

    //Criando um vetor que ira ser armazenado os Chars
    char vetAux[200];

    //Agora iremos pegar palavra por palavra
    while(fscanf(fp, "%s", vetAux) != EOF){
        printf("palavra lida: %s\n", vetAux);
    }

    fclose(fp);
    return 0;

}