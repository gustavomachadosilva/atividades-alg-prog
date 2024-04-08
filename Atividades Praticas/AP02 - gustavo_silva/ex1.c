/* Este programa tem como objetivo informar a posicao final e a velocidade final de um movel. Para isso, é necessário informar
as condições de posição e velocidade iniciais, junto com a sua aceleração e o instante de tempo analisado. Todos os dados no SI. */

#include <stdio.h>
#include <math.h>

int main() {

    float posicaoInicial, posicaoFinal, velocidadeInicial, velocidadeFinal, aceleracao, tempo;

    printf("Informe a posicao inicial do movel (m): ");
    scanf("%f", &posicaoInicial);
    printf("Informe a velocidade inicial do movel (m/s): ");
    scanf("%f", &velocidadeInicial);
    printf("Informe a aceleracao do movel (m/s^2): ");
    scanf("%f", &aceleracao);
    printf("Informe um instante de tempo (s): ");
    scanf("%f", &tempo);

    posicaoFinal = posicaoInicial + (velocidadeInicial * tempo) + ((aceleracao * pow(tempo, 2)) / 2);
    velocidadeFinal = velocidadeInicial + (aceleracao * tempo);

    printf("\nPosicao final do movel: %.2f m\n", posicaoFinal);
    printf("Velocidade final do movel: %.2f m/s\n", velocidadeFinal);

    return 0;
}