#include<stdio.h>

int main(){
    // FOR

    printf("\n TESTE DO FOR COMUM \n\n");
    int i;
    for(i = 0 ; i < 5 ; i++){
        printf("Valor do For %d\n",i);
    }

    // While

    printf("\n TESTE DO WHILE COMUM \n\n");
    int j = 1;
    while(j < 5){
        printf("Valor do While %d\n",j);
        j++;
    }

    //Do While

    printf("\n TESTE DO DO-WHILE\n\n");
    int valor = 0;
    int aumento = 0;

    do{
        aumento += 1;
        printf("Valor do Do-While %d\n",aumento);
        valor++;
    }while(valor < 5);

}
