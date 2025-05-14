/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 08*/

#include <stdio.h>

int main(void)
{
    /*As temperaturas devem ser escritas separadas por ponto e não por virgula*/
    float celsius, fahr;

    printf("Qual a temperatura em celsius?\n");
    scanf("%f", &celsius);

    fahr = celsius * (9.0 / 5.0) + 32.0;

    printf("Temperatura em fahrenheit: %.2f\n", fahr);

    return 0;
}