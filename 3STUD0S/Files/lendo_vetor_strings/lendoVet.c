#include<stdio.h>
#include<stdlib.h>

//lendo caracteres de um vetor, formando uma string

int main(){

    //Construção Básica de abertura de um Arquivo

    FILE* fp = fopen("Arquivo.txt", "r");

    if(fp == NULL){
        printf("Erro! Arquivo não encontrado!\n");
        exit(EXIT_FAILURE);
    }

    //adicionando os chars do arquivo em um vetor

    char vetAux[200];
    while(fgets(vetAux,200,fp) != NULL){
        //Aqui ele ira imprimir todos os caracteres de cada linha
        printf("string do arquivo: [%s]\n", vetAux);
    }

    fclose(fp);
    return 0;
}