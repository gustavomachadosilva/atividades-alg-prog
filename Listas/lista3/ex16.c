/* [Théorie et Pratique du Langage PASCAL - Nebut] Dois jogadores lançam ao mesmo tempo um dado. 
O jogador que tem o maior resultado marca um ponto. O jogo termina quando um dos jogadores obtiver 11 pontos. 
Escrever um programa que simule este jogo de dados, solicitando via teclado a leitura do dado de cada jogador a cada jogada. */

#include <stdio.h>

int main() {

    int dadoJogador1, dadoJogador2, pontosJogador1, pontosJogador2, jogada;

    jogada = 0;
    pontosJogador1 = 0;
    pontosJogador2 = 0;

    printf("\nComecando o jogo de dados!\n");

    do {

        jogada++;
        printf("\nJogada %d:\n", jogada);
        printf("Informe o valor obtido (1 a 6) pelo jogador 1: ");
        scanf("%d", &dadoJogador1);
        printf("Informe o valor obtido (1 a 6) pelo jogador 2: ");
        scanf("%d", &dadoJogador2);

        if (dadoJogador1 > dadoJogador2) {
            pontosJogador1++;
            printf("Ponto do jogador 1!\n");
        }
        else if (dadoJogador2 > dadoJogador1) {
            pontosJogador2++;
            printf("Ponto do jogador 2!\n");
        }
        else {
            printf("Nenhum dos jogadores pontuou nessa jogada!\n");
        }

    } while (pontosJogador1 < 11 && pontosJogador2 < 11);

    printf("\nResultado final:\n");
    printf("Pontos jogador 1: %d\n", pontosJogador1);
    printf("Pontos jogador 2: %d\n", pontosJogador2);

    if (pontosJogador1 > pontosJogador2) {
        printf("\nO jogador 1 eh o vencedor!\n");
    }
    else {
        printf("\nO jogador 2 eh o vencedor!\n");
    }

    return 0;
}