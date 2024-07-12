/* FazerumprogramaCque,fornecidooraiodeumaesfera,calculeoseuvolume.Oprograma deverá realizar um laço de leitura de valores 
para raio, fornecendo para cada um o volume da esfera correspondente. O final do programa será sinalizado com a introdução 
de um valor negativo ou nulo para o raio. Observação: esta função deverá utilizar uma função potencia (float b, int e) 
para calcular a potência do raio necessária na fórmula do volume.
 */

#include <stdio.h>

#define PI 3.1415

void solicitaRaioEsfera(float *ptrRaio);
void calculaVolumeEsfera(float raio, float *ptrVolume);
float potencia(float b, int e);
void informaVolume(float raio, float volume);

int main() {

    float raio;
    float volume;

    solicitaRaioEsfera(&raio);
    calculaVolumeEsfera(raio, &volume);
    informaVolume(raio, volume);

    return 0;
}

void solicitaRaioEsfera(float *ptrRaio) {

    printf("\nInforme o raio da esfera: ");
    scanf("%f", ptrRaio);

}

void calculaVolumeEsfera(float raio, float *ptrVolume) {

    *ptrVolume = (4.0/3.0) * PI * potencia(raio, 3);

}

float potencia(float b, int e) {

    int i;
    float resultadoPotencia = 1.0;

    for (i=0; i<e; i++) {
        resultadoPotencia *= b;
    }

    return resultadoPotencia;

}

void informaVolume(float raio, float volume) {

    printf("\nO volume de uma esfera de raio %f eh: %f\n", raio, volume);

}