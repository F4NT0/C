// ================
// TESTE DE SWITCH
// ================

// Bibliotecas
#include<stdio.h>

// Variaveis
int entrada;

// Função Main para rodar
int main(){
    
    // -> Entrada de Valor pelo usuario
    printf("Digite um valor entre 1 á 10\n");
    scanf("%d", &entrada);

    switch(entrada){
        case 1: printf("Entrada foi 1\n");
        break;
        case 2: printf("Entrada foi 2\n");
        break;
        case 3: printf("Entrada foi 3\n");
        break;
        case 4: printf("Entrada foi 4\n");
        break;
        case 5: printf("Entrada foi 5\n");
        break;
        case 6: printf("Entrada foi 6\n");
        break;
        case 7: printf("Entrada foi 7\n");
        break;
        case 8: printf("Entrada foi 8\n");
        break;
        case 9: printf("Entrada foi 9\n");
        break;
        case 10: printf("Entrada foi 10\n");
        break;
        default: printf("Não é um Número Possivel\n");
        break;
    };
};