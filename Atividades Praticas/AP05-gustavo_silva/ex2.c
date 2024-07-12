#include <stdio.h>
#include <math.h>

int main() {

    float radianos, somatorio, cosMath;
    int iteracoes, fatorial, i, j;

    printf("Digite um valor em radianos: ");
    scanf("%f", &radianos);
    printf("Digite o numero de iteracoes da serie: ");
    scanf("%d", &iteracoes);


    somatorio = 1;
    fatorial = 1;
    for (i=1; i<iteracoes; i++) {


        //for (j=1; j<=(2*i); j++) {
       //     fatorial *= j;
        //}

        fatorial *= ((2*i) - 1) * (2*i);

        somatorio += pow(-1, i) * (pow(radianos, 2*i)/fatorial);
    }

    printf("\nCosseno de %.1f eh aproximadamente %f\n", radianos, somatorio);

    cosMath = cos(radianos);
    printf("Cosseno pela biblioteca: %f", cosMath);

    return 0;
}
