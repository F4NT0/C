// AULA NO LABORATORIO 412

//PARA COMPILAR O ARQUIVO NO TERMINAL
// 1) gcc nomeprograma -o nomecompilavel
// 2) ./nomecompilavel


// são 4 etapas de processamento: (verificar no moodle)
// etapa 1: 
// etapa 2:
// etapa 3: 
// etapa 4: 

#include <stdio.h> //biblioteca I/O

int main(){
    int a,b,c,d;
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

    printf("Informe 2 numeros: ");
    scanf("%d %d", &c,&d);

    printf("c= %d e d= %d \n",c,d);

    while(c < d){
        printf("c= %d\n",c);
        c++;
    }

    return 0;
}