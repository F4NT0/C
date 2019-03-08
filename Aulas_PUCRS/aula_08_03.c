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
#include <math.h> // biblioteca matematica

int main(){
    //variaveis
    int a,b,c,d;

    // iniciado um vetor
    double vetor[10];


    printf("Informe dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("a = %d, b = %d\n",a,b);

    // IF/ELSE EM C
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

    //WHILE EM C
    while(c < d){
        printf("c= %d\n",c);
        c++;
    }

    // FOR EM C
    for(int i = a ; i < b ; i++){
        printf("i = %d\n", i);
        a++;
    }

    //aberração de um for
    //for(;;){
    //    printf("i = %d\n",a);
    //    a++;
    //    if (a == b) break;
    //}

    // MEXENDO COM VETORES E ADICIONANDO VALORES

    // para adicionar a biblioteca de matematica no gcc, pq deu erro
    // gcc nomeprograma -o nomecompilador -lm 


    for(int i = 0 ; i < 10 ; i++){
        vetor[i] = pow(2,i);
        printf("[%d]: %f\n",i, vetor[i]);
    }

    return 0;
}