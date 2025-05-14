/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 09*/

#include <stdio.h>
#define PI 3.14159265359

int main(void)
{

    float graus;
    printf("Digite o angulo em graus: \n");
    scanf("%f", &graus);

    float rad = graus * (PI / 180);
    printf("O mesmo angulo em rad: %f\n", rad);

    return 0;
}