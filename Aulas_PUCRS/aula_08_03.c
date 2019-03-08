// AULA NO LABORATORIO 412

//PARA COMPILAR O ARQUIVO NO TERMINAL
// 1) gcc nomeprograma -o nomecompilavel
// 2) ./nomecompilavel

#include <stdio.h> //biblioteca I/O

int main(){
    int a,b;
    printf("Informe dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n",a,b);

    if(0 < a <= 10){ // na linguagem Java esta instrução não compila
        printf("a se encontra entre 0 e 10\n");
    }
    else{
        printf("a esta fora do intervalo \n");
    }

    if(10 <= b > 0){ // na linguagem Java esta instrução não compila
        printf("b entre 0 e 10\n");
    }
    else{
        printf("b fora do intervalo\n");
    }

    return 0;
}