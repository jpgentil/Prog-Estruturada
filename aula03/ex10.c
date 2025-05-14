/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 10*/

#include <stdio.h>

int main(void)
{
    /*Calculadora de recebimento*/
    int importancia = 780000;
    float g1, g2, g3;
    g1 = 0.46 * (importancia);
    g2 = 0.32 * (importancia);
    g3 = importancia - (g1 + g2);
    printf("Ganhador 1: %.0f\nGanhador 2: %.0f\nGanhador 3: %.0f\n", g1, g2, g3);

    return 0;
}
