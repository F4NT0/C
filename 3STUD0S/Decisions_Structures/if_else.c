#include<stdio.h>

int main(){
    int p = 1;
    int q = 1;

    (q == 1) ? (q = p + 1) :(q = p - 1); //Teste maior
    p == 1 ? (p = 2) : (p = 3);

    printf("Q = %d", p); // a primeira condição após ? foi usada
    printf("P = %d", q); // a primeira condição após ? foi usada
}