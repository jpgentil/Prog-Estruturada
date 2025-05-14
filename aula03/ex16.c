/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 16*/

#include <stdio.h>

int main(void)
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Multiplicacao por dois: %d\n", num << 1);
    printf("Divisao por dois: %d\n", num >> 1);

    return 0;
}