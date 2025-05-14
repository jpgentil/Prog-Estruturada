/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 06*/

#include <stdio.h>

int main(void)
{
    float km_h, m_s;

    printf("Digite uma velocidade em Km/h:\n");
    scanf("%f", &km_h);
    m_s = 10 * (km_h / 36);
    printf("%f", m_s);

    return 0;
}
