#include <stdio.h>
#include <math.h>

#define NUM_PONTOS 5

int main() {
    
    int i, j;
    float distancia, maiorDistancia;
    float coodX[NUM_PONTOS];
    float coodY[NUM_PONTOS];
    
    maiorDistancia = 0;
    
    for (i=0; i<NUM_PONTOS; i++) {
        
        printf("\nInforme a coordenada X do ponto %d: ", i+1);
        scanf("%f", &coodX[i]);
        printf("Informe a coordenada Y do ponto %d: ", i+1);
        scanf("%f", &coodY[i]);
        
    }
    
    for (i=0; i<NUM_PONTOS; i++) {
        
        for (j=i+1; j<NUM_PONTOS; j++) {
    
            distancia = sqrt(pow(coodX[j] - coodX[i], 2) + pow(coodY[j] - coodY[i], 2));
                
            if (distancia > maiorDistancia) {
                maiorDistancia = distancia;
            }
            
        }
        
    }
    
    printf("\nMaior distancia: %.2f\n", maiorDistancia);
    
    return 0;
}
