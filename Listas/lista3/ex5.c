/* [Programação em Pascal - Byron S. Gottfried] Um número primo é um inteiro positivo que é divisível somente por si e por 1. 
Calcule e imprima os primeiros n números primos. (Sugestão: um número n será primo se nenhum dos valores 
n/2, n/3, n/4, . . . n/sqrt(n) for inteiro). 
Teste o seu programa calculando os primeiros 20 números primos. */

#include <stdio.h>
#include <math.h>

int main() {

    int quantidadeNumerosPrimos, i, y, num, identificaNumeroPrimo;

    num = 2;
    i = 0;

    printf("Informe quantos numeros primos: ");
    scanf("%d", &quantidadeNumerosPrimos);

    printf("calculando...\n");

    while (i < quantidadeNumerosPrimos) {
        
        identificaNumeroPrimo = 0;

        for (y = 1; y <= sqrt(num); y++) {
            if (num % y == 0 && y != 1 && y != num) {
                y = sqrt(num) + 1;
                identificaNumeroPrimo = 1;
            }
        }

        if (identificaNumeroPrimo == 0) {
            printf("%d\n", num);
            i++;
        }

        num++;
    }
    

    return 0;
}