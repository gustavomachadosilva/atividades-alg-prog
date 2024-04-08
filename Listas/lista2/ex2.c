/* Faça um programa que lê dois valores, o primeiro servindo de indicador de operação e o segundo correspondendo ao raio 
de uma circunferência. Caso o primeiro valor lido seja igual a 1, calcular e imprimir a área desta circunferência. 
Se o valor lido for 2, calcular e imprimir o perímetro da circunferência. Se o valor lido for diferente destes dois valores, 
imprimir uma mensagem dizendo que o indicador de operação foi mal fornecido.
 */

#include <stdio.h>

#define PI 3.1415;

int main() {

    int indicadorOperacao;
    float raioCircunferencia, areaCircunferencia, perimetroCircunferencia;

    printf("*************************");
    printf("\n\nLista de Operacoes:\n");
    printf("\n1 - Calcula a area da circunferencia.\n");
    printf("2 - Calculo o perimetro da circunferencia.\n\n");
    printf("*************************");

    printf("\n\nDigite o numero da operacao desejada: ");
    scanf("%d", &indicadorOperacao);
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raioCircunferencia);

    switch (indicadorOperacao) {
        case 1:
            areaCircunferencia = raioCircunferencia * raioCircunferencia * PI;
            printf("\n\nArea circunferencia = %f\n", areaCircunferencia);
            break;
        case 2:
            perimetroCircunferencia = 2 * raioCircunferencia * PI;
            printf("\n\nPerimetro circunferencia = %f\n", perimetroCircunferencia);
            break;
        default:
            printf("\n\nO operador indicado nao eh valido!\n");
    }
    
    return 0;
}