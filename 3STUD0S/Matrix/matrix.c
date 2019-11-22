#include<stdio.h>
#include<stdlib.h>
// --------------
// MATRIZES EM C
// --------------

// MAIN
int main(){

   // Alocando dinamicamente matriz 5x5 como vetor
    int* mat = malloc(5 * 5 * sizeof(int));
    int i;
    // Preenchendo...
    for(i=0; i<25; i++)
        mat[i] = i;

    // Alocando como matriz (vetor de ponteiros para vetor)
    int** mat2 = malloc(5 * sizeof(int*));
    // Alocando cada linha...
    for(i=0; i<5; i++)
        mat2[i] = malloc(5 * sizeof(int));

    // Alocando como matriz usando a sintaxe do C99
    int (*mat3)[5] = malloc(5 * sizeof *mat3);

    // Preenchendo mat2 e mat3...
    int j;
    int cont = 0;
    for(i=0; i<5; i++)
        for(j=0; j<5; j++) {
            mat2[i][j] = mat3[i][j] = cont;
            cont++;
        }

    // Visualizando a memória (simplificadamente)
    printf("mat: alocação contígua\n");
    void* dif = 0;
    for(i=0; i<5; i++) {
        printf("mat[0][%d] = %p (%d)\n", i, &mat[5*0+i], mat[5*0+i]);
    }
    for(i=0; i<5; i++) {
        printf("mat[1][%d] = %p (%d)\n", i, &mat[5*1+i], mat[5*1+i]);
    }

    printf("\nmat2: alocação não contígua (cada linha separada)\n");
    for(i=0; i<5; i++)
        printf("mat2[0][%d] = %p (%d)\n", i, &mat2[0][i], mat2[0][i]);
    for(i=0; i<5; i++)
        printf("mat2[1][%d] = %p (%d)\n", i, &mat2[1][i], mat2[1][i]);

    printf("\nmat3: alocação contígua\n");
    for(i=0; i<5; i++)
        printf("mat3[0][%d] = %p (%d)\n", i, &mat3[0][i], mat3[0][i]);
    for(i=0; i<5; i++)
        printf("mat3[1][%d] = %p (%d)\n", i, &mat3[1][i], mat3[1][i]);

    // Liberando mat2
    for(i=0; i<5; i++)
        free(mat2[i]);
    free(mat2);

    // Liberando mat e mat3
    free(mat);
    free(mat3);
}