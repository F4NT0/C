#include<stdio.h> //biblioteca de entrada e saida


//PARA COMPILAR O ARQUIVO
// 1) gcc nomeprograma -o nomecompilavel
// 2) ./nomecompilavel

int main() //função principal para rodar o programa
{
    int i;
    printf("Selecione um valor para armazenar: "); //mensagem que sera apresentada
    scanf("%d", &i); //vai entrar um valor inteiro para a variavel i
    printf("O valor armazenado é: %d\n", i); // apresentação do resultado
    //o %d no printf é para dizer qual formato vai sair no terminal

}