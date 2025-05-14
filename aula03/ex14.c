/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 14*/

#include <stdio.h>

int main(void)
{
    char c;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &c);
    c = c + 32;
    printf("A letra minuscula correspondente e: %c\n", c);
    return 0;
}