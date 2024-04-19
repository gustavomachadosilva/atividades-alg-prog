/* Várias funções matemáticas podem ser escritas através de séries de potências. Por exemplo, para qualquer número real x, 
a exponencial de x pode ser calculada via:
Podemos truncar a série, ou seja, definir uma quantidade finita de termos, e calcular a exponencial de forma aproximada 
usando essa quantidade de termos.
Escreva um programa em C que tenha como entrada o número de termos, o valor de x, e apresente como saída a aproximação 
da função exponencial com essa quantidade de termos. */

#include <stdio.h>
#include <math.h>

int main() {

    int numeroTermos, x, i, fat;
    float exponencial;

    printf("\nPrograma que aproxima o valor de e^x.\n");
    printf("\nInforme o numero de termos para a aproximacao: ");
    scanf("%d", &numeroTermos);
    printf("Informe o x: ");
    scanf("%d", &x);

    exponencial = 1;
    fat = 1;

    for (i=1; i<=numeroTermos; i++) {
        fat *= i;
        exponencial += ((pow(x, i)) / fat);
    }

    printf("\nAproximacao: %f\n", exponencial);

    return 0;
}