/* Um total de 500 alunos de uma universidade foram entrevistados. De cada um deles foram colhidas as seguintes informações: 
o código do curso que freqüenta (E-engenharia; C-computação; A- administração) e a idade. 
Faça um programa que processe esses dados e que forneça as seguintes informações:
a) número de alunos por curso;
b) número de alunos com idade entre 20 e 25 anos, por curso; e
c) qual o curso com menor média de idade. */

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main() {

    int alunosEng, alunosComp, alunosAdm, idade;
    int alunosEntre20e25Eng, alunosEntre20e25Comp, alunosEntre20e25Adm;
    int totalIdadeComp, totalIdadeEng, totalIdadeAdm;
    int flag = FALSE;
    char curso;
    float mediaIdadeEng, mediaIdadeComp, mediaIdadeAdm;

    alunosEng = 0;
    alunosComp = 0;
    alunosAdm = 0;
    alunosEntre20e25Eng = 0;
    alunosEntre20e25Comp = 0;
    alunosEntre20e25Adm = 0;
    totalIdadeEng = 0;
    totalIdadeComp = 0;
    totalIdadeAdm = 0;

    while (flag == FALSE)
    {   
        printf("\nInforme o curso do aluno (E-engenharia; C-computação; A- administração) ou S para sair: ");
        scanf(" %c", &curso);

        if (curso == 'E' || curso == 'C' || curso == 'A') {
            printf("Informe a idade do aluno: ");
            scanf("%d", &idade);
        }

        switch (curso)
        {
        case 'E':
            alunosEng++;
            totalIdadeEng += idade;
            if (idade >= 20 && idade <= 25) {
                alunosEntre20e25Eng++;
            }
            break;
        case 'C':
            alunosComp++;
            totalIdadeComp += idade;
            if (idade >= 20 && idade <= 25) {
                alunosEntre20e25Comp++;
            }
            break;
        case 'A':
            alunosAdm++;
            totalIdadeAdm += idade;
            if (idade >= 20 && idade <= 25) {
                alunosEntre20e25Adm++;
            }
            break;
        case 'S':
            flag = TRUE;
            break;
        default:
            printf("Curso nao reconhecido!\n");
        }
    }

    printf("\nNumero de alunos por curso\n");
    printf("Engenharia: %d\n", alunosEng);
    printf("Computacao: %d\n", alunosComp);
    printf("Administracao: %d\n", alunosAdm);

    printf("\nNumero de alunos com idade entre 20 e 25 anos por curso\n");
    printf("Engenharia: %d\n", alunosEntre20e25Eng);
    printf("Computacao: %d\n", alunosEntre20e25Comp);
    printf("Administracao: %d\n", alunosEntre20e25Adm);

    mediaIdadeEng = totalIdadeEng / alunosEng;
    mediaIdadeComp = totalIdadeComp / alunosComp;
    mediaIdadeAdm = totalIdadeAdm / alunosAdm;

    if (mediaIdadeEng < mediaIdadeComp && mediaIdadeEng < mediaIdadeAdm) {
        printf("\nO curso com menor media de idade eh a Engenharia\n");
    }
    else if (mediaIdadeComp < mediaIdadeEng && mediaIdadeComp < mediaIdadeAdm) {
        printf("\nO curso com menor media de idade eh a Computacao\n");
    }
    else if (mediaIdadeAdm < mediaIdadeEng && mediaIdadeAdm < mediaIdadeComp) {
        printf("\nO curso com menor media de idade eh a Administracao\n");
    }
    else {
        printf("Mais de um curso possui a menor mediad e idade\n");
    }
    
    return 0;
}