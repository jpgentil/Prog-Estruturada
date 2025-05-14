/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 05*/

#include <stdio.h>

int main(void)
{
    int ano_nascimento, ano_atual, idade;

    printf("Escreva em ordem: ano atual e sua idade\n");

    scanf("%i %i", &ano_atual, &idade);

    ano_nascimento = ano_atual - idade;

    printf("Ano de nascimento: %i\n", ano_nascimento);

    return 0;
}