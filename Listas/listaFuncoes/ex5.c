/* Fazer um programa em C que determine se as coordenadas de um ponto (x,y), lidas via teclado, pertencem à área hachuriada 
delimitada pelas funções f1(x) e f2(x), fornecidas na figura abaixo. O programa principal deverá ler estes dois valores 
e chamar uma função denominada verifica, até a ocorrência de um par de coordenadas lidas (x,y) que sejam maiores que 100. 
A função verifica deverá retornar o valor 1 ou 0, indicando se as coordenadas fornecidas pertencem à área hachuriada 
(valor de retorno 1) ou se não pertencem a esta área (valor 0). No programa principal, baseado nestes valores de retorno, 
deverá ser impressa a mensagem "interior" - quando o ponto estiver dentro, ou "exterior" - quando estiver fora. 
A função verifica deverá, ainda, no seu interior, imprimir os valores calculados para as funções f1 e f2. 
A saída do programa deverá apresentar o seguinte lay-out: */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

void solicitaCoordenadasXeYaoUsuario(float *ptrX, float *ptrY);
int condicaoLoop(float x, float y);
void condicaoCoordenadas(float x, float y);
int verificaCoordenadasNoRange(float x, float y);
float f1(float x);
float f2(float x);

int main() {

    float x, y;

    do {

        solicitaCoordenadasXeYaoUsuario(&x, &y);

        if (condicaoLoop(x, y)) {
            condicaoCoordenadas(x, y);
        }

    } while (condicaoLoop(x, y));

    return 0;
}

void solicitaCoordenadasXeYaoUsuario(float *ptrX, float *ptrY) {

    printf("\nInforme as coordenadas para verificação:\n");
    printf("x: ");
    scanf("%f", ptrX);
    printf("y: ");
    scanf("%f", ptrY);

}

int condicaoLoop(float x, float y) {

    if (x <= 100 || y <=100) {
        return TRUE;
    }
    else {
        return FALSE;
    }

}

void condicaoCoordenadas(float x, float y) {

    if (verificaCoordenadasNoRange(x, y) == 1) {
        printf("Interior\n");
    }
    else {
        printf("Exterior\n");
    }

}

int verificaCoordenadasNoRange(float x, float y) {

    if (x > 0) {

        if (y < f1(x) && y > f2(x)) {
            return 1;
        }
        else {
            return 0;
        }

    }
    else if (x < 0) {

        if (y > f1(x) && y < f2(x)) {
            return 1;
        }
        else {
            return 0;
        }

    }
    else {

        if (y == 0) {
            return 1;
        }
        else {
            return 0;
        }

    }

}

float f1(float x) {
    return 3*x;
}

float f2(float x) {
    return x/3.0;
}