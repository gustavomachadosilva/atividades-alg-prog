/* Um dado é lançado 50 vezes e o valor correspondente é anotado. Faça um programa para: 
a) transferir todos os dados para a memória;  
b) determinar e imprimir o número de lançamentos nos quais o resultado obtido é maior do que a média aritmética dos 50 lançamentos;
c) determinar a porcentagem de ocorrências da face 6 do dado.
 */

#include <stdio.h>

#define MAX_LANCAMENTOS 50

int main() {

    int i, soma, ocorrenciasFace6, lancamentosMaiorQueMedia;
    float media, porcentagemOcorrenciasFace6;
    int lancamentosDado[MAX_LANCAMENTOS];

    soma = 0;
    ocorrenciasFace6 = 0;
    lancamentosMaiorQueMedia = 0;

    printf("\nVamos lançar um dado!\n\n");

    for (i=0; i<MAX_LANCAMENTOS; i++) {
        printf("Digite o valor do dado (1 a 6): ");
        scanf("%d", &lancamentosDado[i]);

        soma += lancamentosDado[i];

        if (lancamentosDado[i] == 6) {
            ocorrenciasFace6++;
        }
    }

    media = (float) soma / MAX_LANCAMENTOS;

    for (i=0; i<MAX_LANCAMENTOS; i++) {
        if (lancamentosDado[i] > media) {
            lancamentosMaiorQueMedia++;
        }
    }

    porcentagemOcorrenciasFace6 = (float) ocorrenciasFace6/MAX_LANCAMENTOS;

    printf("\nNumero de lancamentos com valor maior que a media: %d\n", lancamentosMaiorQueMedia);
    printf("Ocorrencias de face 6: %.2f%%\n", porcentagemOcorrenciasFace6 * 100);

    return 0;
}