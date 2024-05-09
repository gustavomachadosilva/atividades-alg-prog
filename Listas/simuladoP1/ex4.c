#include <stdio.h>
#include <string.h>

#define MAXTXT 100
#define MAXPAL 50

#define TRUE 1
#define FALSE 0

int main() {
    
    int i, j, k, contador;
    int tamanhoS1, tamanhoS2;
    int stringEstaPresente;
    char s1[MAXTXT];
    char s2[MAXPAL];
    
    contador = 0;
    
    printf("\nInforme a string s1: ");
    gets(s1);
    printf("Informe a string s2: ");
    gets(s2);
    
    tamanhoS1 = strlen(s1);
    tamanhoS2 = strlen(s2);
    
    for (i=0; i<tamanhoS1; i++) {
        
        if (s1[i] == s2[0]) {
            
            stringEstaPresente = TRUE;
            k=i;
            j=0;
            while (j<tamanhoS2 && stringEstaPresente == TRUE) {
                
                if (s1[k] != s2[j]) {
                    stringEstaPresente = FALSE;
                }
                
                k++;
                j++;
                
            }
            
        }
        
        if (stringEstaPresente == TRUE) {
            contador++;
            stringEstaPresente = FALSE;
        }
        
    }
    
    printf("\nA string %s ocorre %d vezes.\n", s2, contador);
    
    return 0;
}
