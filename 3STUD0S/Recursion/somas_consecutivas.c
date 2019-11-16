// ============================
// TESTE DE SOMAS CONSECUTIVAS
// ============================

// BIBLIOTECAS
#include<stdio.h>
#include<math.h>

// PROTOTIPOS
int sum(int value, int cont);

// VARIAVEL
int value;
int cont;

// FUNCAO RECURSIVA
int sum(int value, int cont){
    if(cont == 0){
        return value;
    }
    value = value + 1;
    cont = cont - 1;
    sum(value,cont);
}

// FUNCAO MAIN 
int main(){

    // -> Valor entrado via entrada do usuario
    printf("Entre o numero de vezes que deseja somar: ");
    scanf("%d", &cont);
    printf("Digite o valor que sera somado: ");
    scanf("%d", &value);

    // -> Teste de valores entrados
    printf("Valor entrado no contador: %d \n", cont);
    printf("Valor entrado que sera somado: %d \n", value);

    // -> Inicializado a funcao
    int total = sum(value,cont);

    // -> Saida da soma
    printf("Valor da Soma: %d \n", total);

    // -> Para finalizar o main quando for necessario
    return 0;

}
