/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 19*/

#include <stdio.h>

int main(void)
{
    int num1, num2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Resultado de %d ^ %d: %d\n", num1, num2, num1 ^ num2);
    printf("Resultado de %d | %d: %d\n", num1, num2, num1 | num2);
    printf("Resultado de %d & %d: %d\n", num1, num2, num1 & num2);

    return 0;
}