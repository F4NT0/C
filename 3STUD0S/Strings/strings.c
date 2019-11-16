#include<stdio.h>
#include<string.h>

//Tratamendo de Strings

int main(){
    //Criando uma String normal em C

    char vetor[] = "String em um vetor"; // Criando a String

    printf("Saida da String: %s\n", vetor);

    // Entrando valores e sendo armazenado como String

    char nome[100]; // Deve-se definir o tamanho desejado

    printf("Entre um nome: ");
    scanf(" %[^\n]s", nome);

    printf("Nome entrado: %s\n", nome);

}


