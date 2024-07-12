/* Fazer um programa em C para calcular o cosseno de x, para x variando de 0 até 6.3 (inclusive), de 0.1 em 0.1. 
O programa deverá imprimir x e o valor correspondente do cosseno. O cálculo do cosseno deverá ser implementado via função, 
utilizando a série:

Considerar 30 parcelas para a obtenção de cosseno de x.
*/

#include <stdio.h>
#include <math.h>

#define X_INCIAL 0.0
#define X_MAX 6.3
#define STEP 0.1

#define MAX_PARCELAS 30

void listarCossenosDoRangeDeX();
float cosseno(float ang);

int main() {

    listarCossenosDoRangeDeX();

    return 0;
}

void listarCossenosDoRangeDeX() {

    float i;

    for (i=X_INCIAL; i<X_MAX; i += STEP) {
        printf("ang: %f -> cos: %f\n", i, cosseno(i));
    }

}

float cosseno(float ang) {

    int i;
    double somatorio;
    double fatorial;

    somatorio = 1;
    fatorial = 1;

    for (i=1; i<=MAX_PARCELAS; i++) {

       fatorial *= ((2*i) - 1) * (2*i);
       somatorio += pow(-1, i) * (pow(ang, 2*i)/fatorial);

    }

    return somatorio;

}