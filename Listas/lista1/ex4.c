/* Faça um programa para calcular e imprimir o salário bruto a ser recebido por um funcionário em um mês. 
O programa deverá utilizar os seguintes dados: número de horas que o funcionário trabalhou no mês, 
valor recebido por hora de trabalho e número de filhos com idade menor do que 14 anos (para adicionar o salário família).*/

#include <stdio.h>
#include <math.h>

int main() {

    int workedHoursMonth, childrenUnderAge14;
    float salary, amountReceivedPerHour, familySalary;

    printf("Enter the worked hours in the month: ");
    scanf("%d", &workedHoursMonth);
    printf("Enter the amount received per hour: ");
    scanf("%f", &amountReceivedPerHour);
    printf("Enter the number of childrens under the age of 14: ");
    scanf("%d", &childrenUnderAge14);

    familySalary = 50.0 * childrenUnderAge14;
    salary = (workedHoursMonth * amountReceivedPerHour) + familySalary;

    printf("\nThe employee`s salary is $ %.2f\n", salary);


    return 0;
}