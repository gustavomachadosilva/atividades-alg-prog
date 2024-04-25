/* Escrevaumprogramaquerecebeumtexto,emumastringentrada,edevolva,em outra string saida, este mesmo texto sem os espaços 
brancos. O comprimento da string saida deverá estar atualizado (isto é, a função strlen aplicada a este string deverá dar 
o seu valor correto).
 */

#include <stdio.h>
#include <string.h>

#define MAX_CARACTERES 100

int main() {

    int tamanhoTexto, tamanhoTextoSemEspaco, i, j;
    char texto[MAX_CARACTERES];
    char textoSemEspaco[MAX_CARACTERES];

    printf("\nInforme o texto: ");
    gets(texto);

    tamanhoTexto = strlen(texto);

    j = 0;
    for (i=0; i<=tamanhoTexto; i++) {
        if (texto[i] != ' ') {
            textoSemEspaco[j] = texto[i];
            j++;
        }
    }

    printf("\nTexto sem espaco: %s\n", textoSemEspaco);

    tamanhoTextoSemEspaco = strlen(textoSemEspaco);
    
    printf("\nTamanho texto: %d\n", tamanhoTexto);
    printf("Tamanho texto sem espaco: %d\n", tamanhoTextoSemEspaco);

    return 0;
}