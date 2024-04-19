/* Faça um programa que pergunte ao usuário o salário de 5 funcionários, registrando-os em um vetor. 
Após, procure e informe o valor e a posição do maior elemento no vetor. */

#include <stdio.h>

#define NUM_FUNCIONARIOS 5

int main() {

    int i, posicaoMaior;
    float maiorSalario;
    float salarios[5];

    maiorSalario = 0;

    for (i=0; i<NUM_FUNCIONARIOS; i++) {
        printf("Digite o salario do %d° funcionario: ", i + 1);
        scanf("%f", &salarios[i]);

        if (salarios[i] > maiorSalario) {
            maiorSalario = salarios[i];
            posicaoMaior = i + 1;
        }       
    }

    printf("\nO maior salaraio eh o do %d° funcionario: R$ %.2f\n", posicaoMaior, maiorSalario);

    return 0;
}