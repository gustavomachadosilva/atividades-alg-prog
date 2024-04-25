/* Faça um programa que armazena informações de 5 pessoas em 3 vetores de 5 posições. 
No primeiro vetor, são armazenados os pesos de cada pessoa, no segundo vetor, são armazenadas as alturas de cada pessoa. 
No terceiro vetor são armazenados os IMCs de cada pessoa. O programa deve ler o peso e a altura de cada pessoa e armazenar 
as informações nos vetores correspondentes. Além disso, ele deve calcular o IMC de cada pessoa e armazená-lo 
no vetor correspondente. Uma mesma posição, nos 3 vetores, armazena informações de uma mesma pessoa. */

#include <stdio.h>

#define MAX_PESSOAS 5

int main() {

    int i;
    float peso[MAX_PESSOAS];
    float altura[MAX_PESSOAS];
    float imc[MAX_PESSOAS];

    for (i=0; i<MAX_PESSOAS; i++) {
        printf("\nInforme o peso (kg) da %d° pessoa: ", i+1);
        scanf("%f", &peso[i]);
        printf("Informe a altura (m) da %d° pessoa: ", i+1);
        scanf("%f", &altura[i]);

        imc[i] = peso[i] / (altura[i] * altura[i]);
    }

    printf("\nResultado:\n");
    for (i=0; i<MAX_PESSOAS; i++) {
        printf("%d° pessoa - Peso: %.2f - Altura: %.2f - IMC: %.2f\n", i+1, peso[i], altura[i], imc[i]);
    }

    return 0;
}