#include<stdio.h>
#include<math.h>

//Protótipos, se for construir as funções depois do Main

//int adicao(int a,int b);
//int subtracao(int a,int b);


// Funções Matemáticos de Teste(devem ser feitas antes do Main)

int adicao(int a, int b){
    int valor;
    valor = a + b;
    return valor;
}

int subtracao(int a, int b){
    int valor;
    valor = a - b;
    return valor;
}

//Função Main serve para rodar o programa em C

int main(){
    printf("Teste de Funcoes em C\n");
    printf("Aqui esta parte de codigo esta sendo lido da funcao main()\n");

    //Entrada de Valores e armazenados em Variaveis
    int a,b,soma,sub;
    
    printf("Digite o Valor 1: ");
    scanf("%d", &a);
    printf("Digite o Valor 2: ");
    scanf("%d", &b);
    
    //testando as funcoes de calculos matematicos

    //int multi = 
    //int divisao = 
    soma = adicao(a,b);
    sub  = subtracao(a,b);
    //int resto = 
    

    //Saidas dos valores de cada Função
    printf("\n");
    printf("Saida da Soma: %d\n",soma);
    printf("Saida da Subtracao: %d\n",sub); 
}