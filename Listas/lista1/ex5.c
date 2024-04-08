/* [Algoritmos - A. I. Orth] Escrever um algoritmo que lê o código da peça 1, o número de peças 1, o valor unitário da peça 1, 
o código da peça 2, o número de peças 2, o valor unitário da peça 2 e a percentagem de IPI a ser acrescentado 
e calcula o valor total a ser pago. */

#include <stdio.h>

int main() {

    int codePiece1, codePiece2, numberOfPieces1, numberOfPieces2;
    float valuePiece1, valuePiece2, ipiPiece1, ipiPiece2, totalAmount;

    printf("Enter the information of piece 1:\n\n");
    printf("Code Piece 1: ");
    scanf("%d", &codePiece1);
    printf("Number of pieces 1: ");
    scanf("%d", &numberOfPieces1);
    printf("Value of piece 1: ");
    scanf("%f", &valuePiece1);
    printf("IPI of piece 1: ");
    scanf("%f", &ipiPiece1);
    
    printf("\nEnter the information of piece 2:\n\n");
    printf("Code Piece 2: ");
    scanf("%d", &codePiece2);
    printf("Number of pieces 2: ");
    scanf("%d", &numberOfPieces2);
    printf("Value of piece 2: ");
    scanf("%f", &valuePiece2);
    printf("IPI of piece 2: ");
    scanf("%f", &ipiPiece2);

    totalAmount = (numberOfPieces1 * valuePiece1 * (1 + (ipiPiece1/100))) + (numberOfPieces2 * valuePiece2 * (1 + (ipiPiece2/100)));

    printf("\nTotal amount to be paid: $%.2f\n", totalAmount);

    return 0;
}