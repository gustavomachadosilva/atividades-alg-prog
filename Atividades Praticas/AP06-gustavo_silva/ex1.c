#include <stdio.h>

#define MAX 8

int main() {

    int i;
    float percentualVotos;
    int numeroPartido, votosValidos, votosInvalidos, totalVotos;
    int votos[MAX] = {};

    votosInvalidos = 0;
    votosValidos = 0;

    do {
        printf("Digite o numero do partido para o qual vai o voto a seguir: ");
        scanf("%d", &numeroPartido);

        if (numeroPartido > 0 && numeroPartido <= MAX) {
            votos[numeroPartido - 1]++;
            votosValidos++;
        }
        else if (numeroPartido < 0 || numeroPartido > MAX) {
            votosInvalidos++;
        }

    } while(numeroPartido != 0);

    totalVotos = votosValidos + votosInvalidos;

    printf("\nO numero total de votos foi %d!\n", totalVotos);
    printf("O numero de votos validos foi %d!\n", votosValidos);
    printf("O numero de votos invalidos foi %d!\n\n", votosInvalidos);

    for (i=0; i<MAX; i++) {
        percentualVotos = (float) votos[i] / votosValidos;
        printf("O partido %d teve %.2f%% dos votos validos!\n", i+1, percentualVotos*100);
    }

    return 0;
}
