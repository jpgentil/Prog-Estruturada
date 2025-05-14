/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 13*/
/*Calcular a hipotenusa de um triângulo retângulo, dados os catetos a e b.*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, h;
    printf("Digite o valor do cateto a: ");
    scanf("%f", &a);
    printf("Digite o valor do cateto b: ");
    scanf("%f", &b);

    h = sqrt(a * a + b * b);
    printf("A hipotenusa e: %.2f\n", h);

    return 0;
}