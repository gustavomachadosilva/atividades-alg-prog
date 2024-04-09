#include <stdio.h>
#include <math.h>

int main() {

    int valor, i, divisor;
    float soma;

    soma = 0;
    

    printf("Informe um valor: ");
    scanf("%d", &valor);

    for (i = 25; i >= 1; i--) {
        
        divisor = 26 - i;

        if (i % 2 == 0){
            soma -= (float) (pow(valor, i))/divisor;
        }
        else {
            soma += (float) (pow(valor, i))/divisor;
        }
    }

    printf("S = %f\n", soma);
    


    return 0;
}