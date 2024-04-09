/* Elaborar um programa que:
a) calcule e escreva o valor aproximado da série abaixo, parando de incluir termos quando o termo a ser incluído for menor do 
que 0,01. 

b) indique quantos termos foram usados. */

#include <stdio.h>

int main() {

    int dividendo, divisor, numeroTermos;
    float razao, soma;

    dividendo = 1;
    divisor = 1;
    razao = 1;
    soma = 0;
    numeroTermos = 0;

    while (razao > 0.01F) {

        soma += razao;

        dividendo += 2;
        divisor += dividendo;
        razao = (float) dividendo/divisor;

        numeroTermos++;
        
    }

    printf("S = %f\n", soma);
    printf("numero de termos = %d\n", numeroTermos);
    

    return 0;
}