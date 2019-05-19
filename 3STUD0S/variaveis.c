#include<stdio.h>

int main(){
    //Variáveis em C

    short int max_short_int = 32767; //tamanho maximo de um inteiro com sinal (32Kb)

    signed short int min_short_int= -32768; //tamanho minimo de um inteiro curto com sinal (32Kb)

    unsigned short int max_short_un_int = 65535; //tamanho maximo de um inteiro curto sem sinal (64Kb)

    unsigned int max_un_int= 4294967295; //tamanho maximo de um inteiro sem sinal(4Gb) depois ele não aceita mais

    int max_int = 2147483647; //tamanho maximo de um inteiro (2Gb)

    int min_int = -2147483648; //tamanho minimo de um inteiro (2Gb)

    char caractere = 1; //primeiro caractere possivel

    char caractere2 = 255; //ultimo caractere possivel

    float pontoflutuante = 2.1234567; // float possui 7 casas de precisão

    double pontoflutuante2 = 2.123456789123456; // double possui 15 casas de precisão

    char vetor[] = "Isto e uma String armazenada no Vetor"; // Strings são um vetor de Caracteres
    

    //Saidas:

    printf("-----------------------------------------\n");

    printf("Maximo inteiro curto: %d\n", max_short_int);
    
    printf("Minimo inteiro curto com sinal: %d\n", min_short_int);
    
    printf("Maximo inteiro curto sem sinal: %d\n", max_short_un_int);
    
    printf("Maximo inteiro sem sinal: %d\n", max_un_int);
    
    printf("Maximo inteiro com sinal: %d\n", max_int);
    
    printf("Minimo inteiro com sinal: %d\n", min_int);
    
    printf("Primeiro Caractere: %c\n", caractere);
    
    printf("Ultimo Caractere: %c\n", caractere2);
    
    printf("Valor de Ponto Flutuante: %f\n", pontoflutuante);
    
   printf("Valor de Ponto Flutuante Double: %1.15f\n", pontoflutuante2); //determinar o numero total de casas no double

   printf("Teste de Saida de Strings: %s\n", vetor); // definir que é uma String e imprimir na tela o vetor

   printf("-----------------------------------------\n"); 
}
            