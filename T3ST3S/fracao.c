#include<stdio.h>

/***************************************************************
    Este Exercício serve para testar como construir uma Struct
    e inicializar ela e chamar dentro de uma função para
    fazer o cálculo de uma fração
****************************************************************/

// STRUCTS

/* Struct de uma fração */
typedef struct{
    int numerador;
    int denominador;
} Fracao;

// PROTÓTIPOS

/* Protótipo da Função Calcula */
float Calcula(Fracao frac);


// FUNÇÕes


/* Função de Transformar uma Fração Inteira em Float */
float Calcula(Fracao frac){
    return (float)frac.numerador / frac.denominador;
}


// MAIN

int main(){
    Fracao f1;
    f1.numerador = 10;
    f1.denominador = 2;
    printf("Valor: %f\n", Calcula(f1));
}