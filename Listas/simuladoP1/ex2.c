#include <stdio.h>
#include <math.h>

int main() {

    int i;
    float valor, tolerancia, erro, termo, resposta;

    printf("\nInforme um valor real n: ");
    scanf("%f", &valor);
    printf("Informe um valor de tolerancia: ");
    scanf("%f", &tolerancia);

    i = 0;
    do {

        termo = 1 / pow(valor, i);
        erro = fabs(termo);

        if (erro > tolerancia) {
            resposta += pow(-1, i) * termo;
        }
        

    } while (erro > tolerancia);

    printf("\n%f\n", resposta);

    return 0;
}