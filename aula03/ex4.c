/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 04*/

#include <stdio.h>

int main(void)
{
    float n1, n2, n3, n4;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    float media_aritmetica = (n1 + n2 + n3 + n4) / 4; 
    printf("%.2f", media_aritmetica);
    
    return 0;
}