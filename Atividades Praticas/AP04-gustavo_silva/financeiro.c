#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {

    float valor, receitas, despesas, balanco, percentualDespesas;
    int flag = TRUE;

    receitas = 0;
    despesas = 0;

    while (flag == TRUE) {

        printf("Digite uma quantia em reais: ");
        scanf("%f", &valor);

        if (valor > 0) {
            receitas += valor;
        }
        else if (valor < 0) {
            despesas += (valor * -1);
        }
        else {
            flag = FALSE;
        }
    }

    balanco = receitas - despesas;

    percentualDespesas = (despesas / receitas) * 100;

    printf("\nOtotal de receitas no periodo foi de R$ %.2f\n", receitas);
    printf("O total de despesas no periodo foi de R$ %.2f\n", despesas);
    printf("O balanco do periodo foi R$ %.2f\n", balanco);
    printf("As despesas equivalem a %.2f%% das receitas do periodo\n", percentualDespesas);

    return 0;
}
