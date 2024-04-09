/* [Algoritmos estruturados - Harry Farrer et al.] Para n números inteiros positivos fornecidos, 
indique os que são números perfeitos.
Obs.: Número perfeito é aquele cuja soma de seus divisores, exceto ele próprio, é igual ao próprio número. */

#include <stdio.h>

int main() {

    int num, contador, soma, logNum;

    contador = 1;
    soma = 0;

    printf("Informe um numero: ");
    scanf("%d", &num);

    logNum = num;

    while (contador == 1) {
        
        if (num % 2 == 0) {
            num /= 2;
            soma += 2;
        }
        else if (num % 3 == 0) {
            num /= 3;
            soma += 3;
        }
        else if (num % 5 == 0) {
            num /= 5;
            soma += 5;
        }
        else if (num % 7 == 0) {
            num /= 7;
            soma += 7;
        }
        else if (num % 11 == 0) {
            num /= 11;
            soma += 11;
        }
        else if (num == 1) {
            num /= 1;
            soma += 1;
            contador = 0;
        }
        else {
            printf("O numero nao pode ser representado por esse programa\n");
            contador = 0;
        }
    }

    if (logNum == soma) {
        printf("%d eh um numero perfeito\n", logNum);
    }
    else {
        printf("%d nao eh um numero perfeito\n", logNum);
    }
    

}