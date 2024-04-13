/* Fazer um programa que calcule e escreva a soma dos n (n variando de 1 a 20 e fornecido pelo usuário) 
primeiros termos da série: */

#include <stdio.h>

int main() {

    int numeroDeTermos, i, y, dividendo, divisor;
    float soma;

    dividendo = 0;
    divisor = 1;
    soma = 0;

    printf("Digite o numero de termos desejado de 1 a 20: ");
    scanf("%d", &numeroDeTermos);

    for (i = 1; i < numeroDeTermos; i++) {
        
        dividendo = 100 - i;
    
        for (y=1; y<i; y++) {
            divisor *= y;
        }

        soma += dividendo/divisor;
    }
    
    printf("S = %f\n", soma);

    return 0;
}