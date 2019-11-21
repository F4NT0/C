#include<stdio.h>

// Protótipos

int soma(int a, int b);
int sub(int a, int b);

// Funções

int soma(int a , int b){
    return a + b;
}

int sub(int a , int b){
    return a - b;
}

// Função Main

int main(){
    // Variáveis
    int a;
    int b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a); // Entrada 1
    
    printf("Digite o segundo valor: ");
    scanf("%d", &b); // Entrada 2
    
    int result_soma = soma(a,b); // soma
    int result_sub = sub(a,b); // sub
    
    printf("Soma: %d \n", result_soma);
    printf("Sub: %d \n", result_sub);
}