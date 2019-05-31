#include<stdio.h>

//Criando uma struct do sistema novo
typedef struct{
    int numerador;
    int denominador;
} Fracao;

//Função para transformar os inteiros em Float
float calcula(Fracao frac){
    return (float)frac.numerador / frac.denominador;
}

//Main do Código
int main(){
    Fracao f1;
    f1.numerador = 10;
    f1.denominador = 2;
    printf("Valor: %f\n", calcula(f1));
}