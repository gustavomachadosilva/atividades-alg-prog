/* Foi realizada uma pesquisa em Porto Alegre, com um número desconhecido de pessoas. 
De cada entrevistado foram colhidos os seguintes dados (parando a coleta quando o valor zero é inserido no clube de preferência): 
a) clube de preferência (1-Grêmio; 2-Internacional; 3-Outros);
b) salário;
c) cidade de origem (0-Porto Alegre; 1-Outras).
Deseja-se saber:
1) número de torcedores por clube;
2) média salarial dos torcedores do Grêmio e do Internacional;
3) número de pessoas nascidas em Porto Alegre que não torcem por nenhum dos dois primeiros
clubes;
4) número de pessoas entrevistadas.
*/

#include <stdio.h>

int main () {

    int clubePreferencia, cidadeOrigem, torcedoresGremio, torcedoresInter, torcedoresOutros, nascidoPortoAlegreTorceParaOutros;
    int pessoasEntrevistadas;
    float salario, salarioGremio, salarioInter, salarioOutros, mediaSalarioGremio, mediaSalarioInter;

    torcedoresGremio = 0;
    torcedoresInter = 0;
    torcedoresOutros = 0;
    salarioGremio = 0;
    salarioInter = 0;
    salarioOutros = 0;
    nascidoPortoAlegreTorceParaOutros = 0;
    pessoasEntrevistadas++;

    do {

        printf("\nInforme o seu clube de preferencia (1-Gremio; 2-Internacional; 3-Outros) ou 0 para sair: ");
        scanf("%d", &clubePreferencia);

        if (clubePreferencia == 1 || clubePreferencia == 2 || clubePreferencia == 3) {
            printf("Informe seu salario: ");
            scanf("%f", &salario);

            printf("Informe sua cidade de origem (0-Porto Alegre, 1-Outras): ");
            scanf("%d", &cidadeOrigem);

            pessoasEntrevistadas++;
        }

        switch (clubePreferencia) {
            case 1:
                torcedoresGremio++;
                salarioGremio += salario;
                break;
            case 2:
                torcedoresInter++;
                salarioInter += salario;
                break;
            case 3:
                torcedoresOutros++;
                salarioOutros += salario;
                switch (cidadeOrigem) {
                    case 0:
                        nascidoPortoAlegreTorceParaOutros++;
                        break;
                    case 1:
                        break;
                    default:
                        printf("Opcao de cidade origem nao valida!\n");
                }
                break;
            case 0:
                break;
            default:
                printf("Opcao nao disponivel\n");
        }

    } while (clubePreferencia != 0);

    mediaSalarioGremio = salarioGremio / torcedoresGremio;
    mediaSalarioInter = salarioInter / torcedoresInter;

    printf("\nQuantidade de torcedores por time:\n");
    printf("Gremio: %d\n", torcedoresGremio);
    printf("Internacional: %d\n", torcedoresInter);
    printf("Outros: %d\n", torcedoresOutros);

    printf("\nMedia salarial dos torcedores:\n");
    printf("Gremio: %.2f\n", mediaSalarioGremio);
    printf("Internacional: %.2f\n", mediaSalarioInter);

    printf("\nNumero de pessoas nascidas em Porto Alegre que torcem por outros times: %d\n", nascidoPortoAlegreTorceParaOutros);

    return 0;
}