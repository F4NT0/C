#include <stdio.h>
#include <stdlib.h>

void troca(int x, int y){
    int t;
    t = x; x = y; y = t;
    printf("x= %d (%p) y = %d (%p)\n",x,&x,y,&y);
}
int main(){
    int a = 5;
    int b = 7;
    printf("a= %d (%p) b = %d (%p)\n",a,&a,b,&b); 
    //%p serve para dizer a posição do endereço de memoria(ponteiro)
    // & é o endereço onde iremos colocar o valor de b 
     troca(a,b); 
    return 0;
}