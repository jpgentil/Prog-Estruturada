/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 01*/
#include <stdio.h>

int main(void)
{
    int numero, sucessor, antecessor; /*Define integers numbers useds in the program*/
    
    
    scanf("%d\n", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("antecessor: %d\t sucessor: %d\n", antecessor, sucessor);
}