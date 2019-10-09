#include<stdio.h>

/*-----------------------------
    TESTE DO NULL EM PONTEIROS
------------------------------*/



int main(){
    int a;
    char ver;
    int* c = NULL;

    printf("----------------------------------\n");
    printf("TESTE DE INICIALIZAÇÃO DE PONTEIRO\n");
    printf("----------------------------------\n\n");

    // VERIFICAR SE INICIALIZAREMOS O PONTEIRO
    printf("Deseja inicializar o ponteiro? [s/n] \n");
    scanf("%c",&ver);

    if(ver == 's' || ver == 'S'){
        printf("Digite o valor inteiro de entrada: \n");
        scanf("%d",&a);
        c = &a;
    }

    if(c == NULL){
        printf("Ponteiro vazio inicializado! %p\n",c);
    }else{
        printf("Ponteiro Inicializado! Valor: %d\n",*c);
    }



}