#include<stdio.h> // I/O do programa
#include<string.h> // Tratamento de Strings
#include<stdlib.h>

//TESTE COM STRUCTS


//Criação de um Struct de Pessoa, fica fora da função Main

struct Pessoa{
    int idade;
    char nome[100];
    float tamanho;
};

int main(){

//Chamada do Struct na Pessoa Pedro

struct Pessoa Pedro;

// Entrada de Valores pelo Terminal


//Como pegar a idade
int idade;
printf("Qual a idade do Pedro? ");
scanf("%d", &idade);
Pedro.idade = idade;


//Como pegar uma String com C

char nome[100]; //Criamos um vetor auxiliar

printf("Qual o Nome Completo do Pedro? ");
scanf(" %[^\n]s", nome); // [^\n] serve para evitar que ele pule com espaços as palavras
strcpy(Pedro.nome,nome);


//Como pegar o tamanho 
float tamanho;
printf("Qual o Tamanho do Pedro? ");
scanf("%f", &tamanho);
Pedro.tamanho = tamanho;

//Saida de Valores

printf("\nNome Completo: %s\n", Pedro.nome);
printf("Idade: %d\n", Pedro.idade);
printf("Tamanho: %1.2f\n", Pedro.tamanho);


}
