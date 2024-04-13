/* Fazer um programa que calcule o resultado final das eleições para a presidência de um clube, sabendo- se que:
a) existem três chapas concorrendo;
b) oseleitoresvotaramfornecendoonúmerodachapaescolhida(valorentre1e3);
c) votaram ao todo 200 membros do clube.
O programa deverá processar os votos recebidos e fornecer o total de votos de cada uma das chapas, 
o total de votos em branco (valor 0) e o total de votos nulos. Além disso, 
o programa deverá verificar se a chapa mais votada é vencedora no primeiro turno da eleição (mais de 50% dos votos) 
ou se deverá ocorrer um segundo turno. */

#include <stdio.h>
#include <stdlib.h>

#define MEMBROS_CLUBE 200

int main() {

    int voto, votosChapaUm, votosChapaDois, votosChapaTres, votosBranco, votosNulos;
    int votosValidos;
    float percentualChapaUm, percentualChapaDois, percentualChapaTres;

    votosBranco = 0;
    votosChapaUm = 0;
    votosChapaDois = 0;
    votosChapaTres = 0;
    votosNulos = 0;

    for (int i=0; i<MEMBROS_CLUBE; i++) {
        voto = rand() % 5;

        switch (voto) {
            case 0:
                votosBranco++;
                break;
            case 1:
                votosChapaUm++;
                break;
            case 2:
                votosChapaDois++;
                break;
            case 3:
                votosChapaTres++;
                break;
            default:
                votosNulos++;
        }
    }

    printf("\nTotal de votos:\n");
    printf("Votos chapa 1: %d\n", votosChapaUm);
    printf("Votos chapa 2: %d\n", votosChapaDois);
    printf("Votos chapa 3: %d\n", votosChapaTres);
    printf("Votos em branco: %d\n", votosBranco);
    printf("Votos nulos: %d\n", votosNulos);

    votosValidos = votosChapaUm + votosChapaDois + votosChapaTres;

    percentualChapaUm = (float) votosChapaUm / votosValidos;
    percentualChapaDois = (float) votosChapaDois / votosValidos;
    percentualChapaTres = (float) votosChapaTres / votosValidos;

    if (percentualChapaUm > 0.5) {
        printf("\nA chapa vencedora eh a chapa 1\n");
    }
    else if (percentualChapaDois > 0.5) {
        printf("\nA chapa vencedora eh a chapa 2\n");
    }
    else if (percentualChapaTres > 0.5) {
        printf("\nA chapa vencedora eh a chapa 3\n");
    }
    else {
        printf("\nNenhuma das chapas obteve mais da metade dos votos. Sera necessario um segundo turno.\n");
    }

    return 0;
}