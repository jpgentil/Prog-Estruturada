/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 11*/

#include <stdio.h>

int main(void)
{
    float raio, area;
    const float PI = 3.141592;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo: %.2f\n", area);
}