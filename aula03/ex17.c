/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 17*/

#include <stdio.h>

int main(void)
{
    int num, complemento;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    complemento = ~num; /*Calcula o complemento a um do numero*/

    printf("O complemento bit a bit de %d: %d\n", num, complemento);

    return 0;
}