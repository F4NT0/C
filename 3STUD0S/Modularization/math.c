#include <stdio.h>
#include "math.h" // CHAMANDO O HEADER DO MATH

// -----------------------------------
// FUNÇÕES MAIN DEFINIDAS NO HEADER (main.h)
// Created by: Gabriel Fanto
// -----------------------------------


// SOMA INTEIROS
int soma_int(int valor1, int valor2){
    return valor1 + valor2;
}

// SUBTRAÇÃO INTEIROS
int sub_int(int valor1 , int valor2){
    return valor1 - valor2;
}

// MULTIPLICAÇÃO INTEIROS
int mult_int(int valor1, int valor2){
    return valor1 * valor2;
}

// DIVISÃO INTEIROS
float div(int valor1, int valor2){
    if(valor2 == 0){
        return 0;
    }
    float exit = (float) valor1/valor2; //cast de int para float
    return exit;
}

// POTENCIAÇÃO INTEIROS(RECURSIVO)
int pot_int(int base, int exponent,int answer){
    int count = exponent;
    if(count == 0){
        return answer;
    }
    int value = base * base;
    count--;
    return pot_int(base,count,value);
    
    
}

// FATORIAL (RECURSIVO)
int fatorial(int valor){
    if(valor == 1){
        return 1;
    }
    int value = valor - 1; // pega o anterior
    return valor * fatorial(value);
    
}

// SOMATÓRIO (RECURSIVO)
int somatorio(int valor){
    if(valor == 1){
        return 1;
    }
    int value = valor -1;
    return valor + somatorio(value);
}

