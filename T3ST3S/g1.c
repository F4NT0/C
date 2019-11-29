#include<stdio.h>


/*****************************************************
 Este Exercício envolve fazer o cálculo da Média G1 
 de um aluno, onde se verifica se:
 1. O número de faltas não excede 75%
 2. O aluno tirou mais de 7,0 no grau completo do G1
******************************************************/

// STRUCTS

/* Construindo uma Struct de Informações do Aluno */
typedef struct{
    float p1;
    float p2;
    float trab;
    int faltas;
}Aluno;

// VARIÁVEIS GLOBAIS

/* Definimos a presença como os 75% necessários */
#define PRESENCA 0.75
#define dois_cretidos 19
#define quatro_creditos 37

// PROTÓTIPOS

/* Protótipo da Função do Cálculo G1 */
float G1(Aluno pessoa);

/* Protótipo do Cálculo de Presenças Mínimas */
void Faltasfeitas(int faltas,float total);

// FUNÇÕES

/* Função de Cálculo das Faltas */
void Faltasfeitas(int faltas, float total){
    int maximo = total / PRESENCA; // TODO: arrumar porque não funciona
    printf("Maximo de Faltas: %d \n", maximo);
    if(faltas > maximo){
        printf("REPROVADO POR FALTAS!! \n");
    }
}

/* Função de Cálculo do G1 */
float G1(Aluno pessoa){
    return (float) ((pessoa.p1 + pessoa.p2) + pessoa.trab) / 3;
}


//main do sistema para iniciar
int main(){

    // Variáveis 
    Aluno a1;
    float nota;
    int creditos_aluno;

    // Inicializando os valores das Notas
    float p1;
    printf("Qual a nota do seu P1: ");
    scanf("%f",&p1);
    a1.p1 = p1;

    float p2;
    printf("Qual a nota do seu P2: ");
    scanf("%f", &p2);
    a1.p2 = p2;

    float trab;
    printf("Qual a nota do seu Trabalho: ");
    scanf("%f", &trab);
    a1.trab = trab;

    float faltas;
    printf("Quantas faltas você já teve: ");
    scanf("%f", &faltas);
    a1.faltas = faltas;

    printf("Qual o Número de Créditos da cadeira [2 ou 4] : ");
    scanf("%d", &creditos_aluno);

    if(creditos_aluno == 2)
        Faltasfeitas(a1.faltas,dois_cretidos);
        nota = G1(a1);
    if(creditos_aluno == 4)
        Faltasfeitas(a1.faltas,quatro_creditos);
        nota = G1(a1);
    
    printf("Nota Final: %1.2f \n", nota);


}
