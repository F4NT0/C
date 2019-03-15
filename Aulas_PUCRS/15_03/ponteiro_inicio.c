#include <stdio.h>
#include <stdlib.h>

void troca(int x, int* y){ //int* é um ponteiro para um inteiro
    int t;
    t = x; x = *y; *y = t; // *y é o valor armazenado na posição de memoria chamado no ponteiro
    printf("x= %d (%p) y = %p (%p)\n",x,&x,y,&y);
//sempre que termina uma função, todo o espaço criado dentro dela para a função é apagado
}
int main(){
    int a = 5;
    int b = 7;
    printf("a= %d (%p) b = %d (%p)\n",a,&a,b,&b);  
     troca(a, &b);  //&b ele pega o endereço da variavel b e passa para o int* y
    return 0;
}