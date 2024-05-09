#include <stdio.h>

#define MAX_LOJAS 4
#define MAX_LIVROS 4
#define MAX_CHAR 80

int main() {
    
    int i, j;
    int codigoLoja, maisVendido;
    char nomesLivros[MAX_LIVROS][MAX_CHAR];
    int livrosVendidos[MAX_LIVROS][MAX_LOJAS];
    
    printf("\nRealizando cadastro mensal da Loja!\n");
    
    printf("\nInforme o nome dos %d livros vendidos:\n", MAX_LIVROS);
    for (i=0; i<MAX_LIVROS; i++) {
        printf("Livro %d: ", i+1);
        gets(nomesLivros[i]);
    }
    
    printf("\nInforme a quantidade vendida por loja de cada livro:\n");
    for (i=0; i<MAX_LIVROS; i++) {
        
        printf("\nLivro '%s':\n", nomesLivros[i]);
        
        for (j=0; j<MAX_LOJAS; j++) {
            printf("Loja %d: ", j);
            scanf("%d", &livrosVendidos[i][j]);
        }
        
    }
    
    do {
        
        printf("\nInforme o codigo da loja: ");
        scanf("%d", &codigoLoja);
        
        if (codigoLoja >= 0 && codigoLoja <= (MAX_LOJAS - 1)) {
            maisVendido = 0;
            
            for (i=0; i<MAX_LIVROS; i++) {
                if (livrosVendidos[i][codigoLoja] > maisVendido) {
                    maisVendido = livrosVendidos[i][codigoLoja];
                }
            }
            
            printf("Os livros mais vendidos da loja %d são:\n", codigoLoja);
            for (i=0; i<MAX_LIVROS; i++) {
                if (livrosVendidos[i][codigoLoja] == maisVendido) {
                    printf("%s: %d\n", nomesLivros[i], maisVendido);
                }
            }
        }
        else {
            printf("Finalizando o sistema de consulta\n");
        }
        
    } while (codigoLoja >= 0 && codigoLoja <= (MAX_LOJAS - 1));
    
    return 0;
}
