#include<stdio.h>
#include<math.h>
// ----------------------------
// TESTES DE PONTEIROS NO VETOR
// ----------------------------

// Protótipos 
void mult(int* vetor, int tam);
void soma(int* vetor, int tam);
void sub(int* vetor, int tam);

//Função
void mult(int* vetor, int tam){
    for(int i = 0 ; i < tam ; i++){
        vetor[i] = vetor[i] * vetor[i];
    }
}

void soma(int* vetor, int tam){
    for(int i = 0 ; i < tam ; i++){
        vetor[i] = vetor[i] + 1;
    }
}

void sub(int* vetor , int tam){
    for(int i = 0 ; i < tam ; i++){
        vetor[i] = vetor[i] - 1;
    }
}


// MAIN 
int main(){
    
    // Criando o vetor
    int tamanho;
    printf("Defina o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Colocando valores dentro
    printf("Adicionando valores dentro do vetor.....\n");
    int vetor[tamanho];
    for(int i = 0 ; i < tamanho ; i++){
        vetor[i] = i;
    }
    printf("Valores adicionados!!\n\n");

    // Lendo os valores dentro do vetor
    printf("Valores do vetor: \n\n");
    for(int i = 0 ; i < tamanho ; i++){ 
        printf("Pos[%d]: %d \n", i,*(vetor+i));
    }
    printf("\n");

    // Utilizando as funções
    
    printf("Multiplicação: \n\n");
    int multi[tamanho]; // Para não estragar o vetor original
    for(int i = 0 ; i < tamanho ; i++){multi[i] = vetor[i];}
    mult(multi,tamanho);
    printf("Valores do vetor: \n\n");
    for(int i = 0 ; i < tamanho ; i++){ printf("Pos[%d]: %d \n", i,*(multi+i));}
    printf("\n\n");

    printf("Soma: \n\n");
    int sum[tamanho];
    for(int i = 0 ; i < tamanho ; i++){sum[i] = vetor[i];}
    soma(sum,tamanho);
    printf("Valores do vetor: \n\n");
    for(int i = 0 ; i < tamanho ; i++){ printf("Pos[%d]: %d \n", i,*(sum+i));}
    printf("\n\n");

    printf("Subtração: \n\n");
    int subtracao[tamanho];
    for(int i = 0 ; i < tamanho ; i++){subtracao[i] = vetor[i];}
    sub(subtracao,tamanho);
    printf("Valores do vetor: \n\n");
    for(int i = 0 ; i < tamanho ; i++){ printf("Pos[%d]: %d \n", i,*(subtracao+i));}
    printf("\n\n");

    






}