#include<stdio.h>
#include<stdlib.h>

//lendo Caracteres de um arquivo texto em C

int main(){

    //Construção Básica de abertura de Arquivo
    FILE* fp = fopen("Arquivo.txt", "r");

    if(fp == NULL){
        printf("Erro! Arquivo não encontrado!\n");
        exit(EXIT_FAILURE);
    }

    //Lendo Charactere por Charactere
    char caractere;
    while ((caractere = fgetc(fp)) != EOF){ //EOF(End Of File) sera quando nao tiver mais nada(e um int negativo) 
        printf("char: %c\n", caractere);
    }

    //Fechando o Arquivo

    fclose(fp);
    return 0;
}