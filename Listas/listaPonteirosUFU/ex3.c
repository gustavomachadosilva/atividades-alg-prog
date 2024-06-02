/* Escreva um programa que contenha duas varia ́veis inteiras. Leia essas varia ́veis do teclado. 
Em seguida, compare seus enderec ̧os e exiba o conteu ́do do maior enderec ̧o.
 */

#include <stdio.h>

int main() {

    int num1;
    int num2;

    int *pNum1 = &num1;
    int *pNum2 = &num2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);

    printf("\nNumero com maior endereco:\n");
    if ((long) pNum1 > (long) pNum2) {
        printf("%d\n", *pNum1);
    }
    else {
        printf("%d\n", *pNum2);
    }

    return 0;
}