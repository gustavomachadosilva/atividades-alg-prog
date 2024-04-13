/* Em uma pesquisa no R.U. perguntou-se a cada aluno quantas refeições fez no mês anterior. 
Faça um programa que leia os dados fornecidos por m alunos (m fornecido pelo usuário), e retorne:
a) o número de alunos que fez menos de 10 refeições no mês;
b) onúmerodealunosquefezentre10e20refeições;e
c) o número de alunos que fez mais de 20 refeições.
 */

#include <stdio.h>

int main() {

    int numeroAlunos, menosDeDez, entreDezEVinte, maisDeVinte, refeicoes;

    menosDeDez = 0;
    entreDezEVinte = 0;
    maisDeVinte = 0;

    printf("Informe quantos alunos participaram da pesquisa: ");
    scanf("%d", &numeroAlunos);

    for (int i = 0; i < numeroAlunos; i++)
    {
        printf("\nInforme quantas refeicoes o aluno %d fez no mes anterior: ", i + 1);
        scanf("%d", &refeicoes);

        if (refeicoes < 10) {
            menosDeDez++;
        }
        else if (refeicoes >= 10 && refeicoes <= 20) {
            entreDezEVinte++;
        }
        else {
            maisDeVinte++;
        }
    }

    printf("\nQuantidade de alunos que fez menos de 10 refeicoes: %d\n", menosDeDez);
    printf("Quantidade de alunos que fez entre 10 e 20 refeicoes: %d\n", entreDezEVinte);
    printf("Quantidade de alunos que fez mais de 20 refeicoes: %d\n", maisDeVinte);
    

    return 0;
}