#include<stdio.h>
#include "math.h" // CHAMANDO O ARQUIVO COM AS FUNÇÕES

// ---------------------------
// ARQUIVO MAIN PARA TESTE
// Created by: Gabriel Fanto
// ---------------------------


// VARIÁVEIS
int valor1 = 2;
int valor2 = 5;


int main(){

    // TESTE DAS FUNÇÕES MATEMÁTICAS
    int soma = soma_int(valor1,valor2); // 7
    int sub = sub_int(valor2,valor1); // 3
    int mult = mult_int(valor1,valor2); // 10
    float div1 = div(valor1,0); // Não pode
    float div2 = div(valor2,valor1); // 2.5
    int pot = pot_int(valor2,valor1,0); // 25
    int fat = fatorial(valor2); // 120
    int somatory = somatorio(valor2); // 15

    // SAIDA

    printf("----------------------------\n");
    printf("Sum: %d \n" , soma);
    printf("Subtraction: %d \n" , sub);
    printf("Multiplication: %d \n", mult);
    printf("Division By zero: %1.2f \n", div1);
    printf("Division: %1.1f \n", div2);
    printf("Potencialization: %d \n", pot);
    printf("Fatorial: %d \n", fat);
    printf("Somatory: %d \n", somatory); 
    printf("----------------------------\n");
}
