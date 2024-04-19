/* Faça um programa que leia um vetor de 50 elementos e determine quantos elementos não repetidos (diferentes) existem neste vetor.
 */

#include <stdio.h>

#define NUM_ELEMENTOS 50
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, posicaoAtualASerPreenchidaVetorUnicos;
    int numeros[NUM_ELEMENTOS];
    int numerosUnicos[NUM_ELEMENTOS] = {};
    int flag;

    posicaoAtualASerPreenchidaVetorUnicos = 0;

    printf("\nPreenchendo o vetor de numeros inteiros:\n\n");

    for (i=0; i<NUM_ELEMENTOS; i++) {
        printf("Informe o %d° elemento: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i=0; i<NUM_ELEMENTOS; i++) {
        flag = FALSE;
        for (j=0; j<NUM_ELEMENTOS; j++) {
            if (numeros[i] == numerosUnicos[j]){
                flag = TRUE;
            }
        }

        if (flag != TRUE) {
            numerosUnicos[posicaoAtualASerPreenchidaVetorUnicos] = numeros[i];
            posicaoAtualASerPreenchidaVetorUnicos++;
        }
    }

    printf("\nNeste vetor existem %d numeros unicos.\n", posicaoAtualASerPreenchidaVetorUnicos);

    return 0;
}