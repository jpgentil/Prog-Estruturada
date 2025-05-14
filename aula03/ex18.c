/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 18*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int num1, num2;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Deslocamento a esquerda de %d por %d: %d\n", num1, num2, num1 << num2);
    printf("Deslocamento a direita de %d por %d: %d\n", num1, num2, num1 >> num2);

    return 0;
}