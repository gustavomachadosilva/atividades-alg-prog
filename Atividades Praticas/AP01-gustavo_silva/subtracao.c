/* Este programa define dois inteiros, subtrai seus valores e exibe o resultado na tela Entradas: 
dois valores inteiros (definidos no programa)
Saida: a subtracao dos dois valores lidos */

#include <stdio.h>

int main() {
    float val1, val2; //Declaracao das variaveis de entrada
    float sub; //Declaracao da variavel com o resultado (saida)
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);

    sub = val1 - val2;

    printf("Resultado da subtracao de %.2f - %.2f: %.2f\n", val1, val2, sub);
    
    return 0;
}