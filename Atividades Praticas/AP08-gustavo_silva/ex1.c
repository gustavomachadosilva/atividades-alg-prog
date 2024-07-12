#include "raylib.h"
#include <string.h>

#define LARGURA 600
#define ALTURA 600
#define LARGURA_QUADRADO 20
#define ALTURA_QUADRADO 20
#define PASSO 20
#define TRUE 1
#define FALSE 0
#define POSICAO_X_INICIAL 300
#define POSICAO_Y_INICIAL 300

int main(void){
    int posicaoX = POSICAO_X_INICIAL;
    int posicaoY = POSICAO_Y_INICIAL;
    int quadradoNaTela = TRUE;

    InitWindow(LARGURA, ALTURA, "Quadrado");
    SetTargetFPS(60);

    while (!WindowShouldClose() && quadradoNaTela == TRUE)
    {

        if (IsKeyPressed(KEY_RIGHT)) posicaoX += PASSO;
        if (IsKeyPressed(KEY_LEFT)) posicaoX -= PASSO;
        if (IsKeyPressed(KEY_UP)) posicaoY -= PASSO;
        if (IsKeyPressed(KEY_DOWN)) posicaoY += PASSO;

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(posicaoX, posicaoY, LARGURA_QUADRADO, ALTURA_QUADRADO, GREEN);
        EndDrawing();

        if (posicaoX < 0 || posicaoX >= LARGURA || posicaoY < 0 || posicaoY >= ALTURA ) {
            quadradoNaTela = FALSE;
        }

    }

    CloseWindow();

    return 0;
}

