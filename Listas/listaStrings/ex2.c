/* Dado um texto, identificar cada palavra deste texto e verificar se é palíndroma. 
Uma palavra palíndroma é aquela que apresenta a mesma grafia quando lida a partir do início ou de trás para diante; 
exemplo: RIR, SOLOS, ASA, RALAR, AMA. O programa deve utilizar uma função booleana para verificar se uma palavra 
identificada no texto é palíndroma. A saída do programa deve ser uma tabela listando as palavras identificadas e, 
para cada uma, a mensagem dizendo se é ou não palíndroma. */

#include <stdio.h>

#define MAX_CARACTERES_TEXTO 100
#define MAX_CARACTERES_PALAVRAS 20
#define TRUE 1
#define FALSE 0

int main() {

    int i, j, k, posicaoInicial, posicaoFinal;
    int flagDiferente = FALSE;
    int flagTextoTerminou = FALSE;
    char texto[MAX_CARACTERES_TEXTO];
    char palavra[MAX_CARACTERES_PALAVRAS];

    printf("\nInforme o texto: ");
    gets(texto);

    printf("\n");

    i = 0;
    posicaoInicial = 0;
    posicaoFinal = 0;
    while (flagTextoTerminou == FALSE) {
        if (texto[i] == ' ' || texto[i] == ',' || texto[i] == '.' || texto[i] == '\0') {

            j = posicaoInicial;
            k = posicaoFinal;
            while (j <= posicaoFinal && k >= posicaoInicial && flagDiferente == FALSE) {
                
                if (texto[j] != texto[k]) {
                    flagDiferente = TRUE;
                }

                j++;
                k--;
            }

            for (j=posicaoInicial; j<=posicaoFinal; j++) {
                printf("%c", texto[j]);
            }

            if (flagDiferente == FALSE) {
                printf(" - palindromo\n");
            }
            else {
                printf(" - não palindromo\n");
            }
            
            posicaoInicial = i+1;

        }
        else {
            posicaoFinal = i;
        }

        if (texto[i] == '\0') {
            flagTextoTerminou = TRUE;
        }
        else {
            i++;
        }
        
    }

    return 0;
}