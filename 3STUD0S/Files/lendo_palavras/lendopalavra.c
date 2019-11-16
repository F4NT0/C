// ==========================================
// TESTE DE LEITURA DE PALAVRAS DE UM ARQUIVO
// ==========================================

// BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>

// FUNCAO MAIN
int main(){

    // -> Abrindo um arquivo

    FILE* fp = fopen("Arquivo.txt", "r"); // r significa que vai ler(read) o arquivo
    if(fp == NULL){ //teste caso nao exista o arquivo
        printf("Erro! Arquivo não encontrado!\n");
        exit(EXIT_FAILURE);
    }

    // -> Criacao do vetor para guardar os Caracteres

    char vetAux[200];

    // -> Lendo palavra por palavra do arquivo

    /*
    *  1) fscanf vai pegar a leitura do arquivo(fp)
    *  2) definimos que desejamos pegar como uma String
    *  3) chamamos junto o vetor que ele ira usar para armazenar as Strings
    */

    while(fscanf(fp, "%s", vetAux) != EOF){
        printf("palavra lida: %s\n", vetAux);
    }

    fclose(fp); // Fecha o arquivo lido
    return 0;

}