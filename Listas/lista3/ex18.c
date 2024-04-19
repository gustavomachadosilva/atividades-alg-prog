/* [Pascal Estruturado - H. Farrer et al.] Deseja-se fazer uma pesquisa a respeito do consumo mensal de energia elétrica 
em uma determinada cidade. Para isso são fornecidos os seguintes dados de vários consumidores:
• quantidade de kWh consumidos durante o mês;
• código do tipo de consumidor (residencial, comercial, industrial). Valor final: quantidade = 0 e codigo = 0.
Calcular:
• o menor e o maior consumo de consumidor residencial.
• o maior consumo dos consumidores comerciais e industriais;
• o total de consumo para cada um dos tipos de consumidores;
• a média geral de consumo industrial;
Escrever os resultados. */

#include <stdio.h>

#define CONSUMIDOR_RESIDENCIAL 1
#define CONSUMIDOR_COMERCIAL 2
#define CONSUMIDOR_INDUSTRIAL 3

int main() {

    float energiaMensal, menorConsumoResidencial, maiorConsumoResidencial, maiorConsumoComercial, maiorConsumoIndustrial;
    float totalConsumoResidencial, totalConsumoComercial, totalConsumoIndustrial, mediaConsumoIndustrial;
    int tipoConsumidor, consumidoresIndustriais;

    menorConsumoResidencial = 0;
    maiorConsumoResidencial = 0;
    maiorConsumoComercial = 0;
    maiorConsumoIndustrial = 0;
    totalConsumoResidencial = 0;
    totalConsumoComercial = 0;
    totalConsumoIndustrial = 0;
    consumidoresIndustriais = 0;

    printf("\nPesquisa de consumo mensal de energia elétrica!\n");

    do {

        printf("\nInforme a energia consumida no mês (kWh mensal): ");
        scanf("%f", &energiaMensal);
        printf("Informe seu codigo de tipo de consumidor (1-residencial, 2-comercial, 3-industrial): ");
        scanf("%d", &tipoConsumidor);

        if (energiaMensal >= 0) {
            
            switch (tipoConsumidor) {
                case CONSUMIDOR_RESIDENCIAL:
                    if (energiaMensal > maiorConsumoResidencial) {
                        maiorConsumoResidencial = energiaMensal;
                    }
                    else if (energiaMensal < menorConsumoResidencial || menorConsumoResidencial == 0) {
                        menorConsumoResidencial = energiaMensal;
                    }
                    totalConsumoResidencial += energiaMensal;
                    break;
                case CONSUMIDOR_COMERCIAL:
                    if (energiaMensal > maiorConsumoComercial) {
                        maiorConsumoComercial = energiaMensal;
                    }
                    totalConsumoComercial += energiaMensal;
                    break;
                case CONSUMIDOR_INDUSTRIAL:
                    if (energiaMensal > maiorConsumoIndustrial) {
                        maiorConsumoIndustrial = energiaMensal;
                    }
                    totalConsumoIndustrial += energiaMensal;
                    consumidoresIndustriais++;
                    break;
                case 0:
                    break;
                default:
                    printf("Codigo invalido!\n");
            }

        }
        else {
            printf("A energia nao pode ser registrada como negativa!\n");
        }

    } while (energiaMensal != 0 || tipoConsumidor != 0);

    printf("\nMenor consumo de consumidores residenciais: %.2f kWh\n", menorConsumoResidencial);
    printf("Maior consumo de consumidores residenciais: %.2f kWh\n", maiorConsumoResidencial);
    printf("Maior consumo de consumidores comerciais: %.2f kWh\n", maiorConsumoComercial);
    printf("Maior consumo de consumidores industriais: %.2f kWh\n", maiorConsumoIndustrial);

    printf("\nConsumo total de consumidores residenciais: %.2f kWh\n", totalConsumoResidencial);
    printf("Consumo total de consumidores comerciais: %.2f kWh\n", totalConsumoComercial);
    printf("Consumo total de consumidores industriais: %.2f kWh\n", totalConsumoIndustrial);

    if (consumidoresIndustriais > 0) {
        mediaConsumoIndustrial = (float) totalConsumoIndustrial / consumidoresIndustriais;
        printf("\nMedia de consumo de consumidores industriais: %.2f kWh\n", mediaConsumoIndustrial);
    }
    
    return 0;
}