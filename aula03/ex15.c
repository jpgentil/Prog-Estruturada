/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 15*/

#include <stdio.h>

int main(void)
{
    int numero, centena, dezena, unidade, invertido;

    printf("Digite um numero inteiro de tres digitos: \n");
    scanf("%i", &numero);

    /*Verifica se o numero realmente tem 3 digitos*/
    if (numero < 99 || numero > 999)
    {
        printf("O numero deve conter apenas 3 digitos\n");
        return 1;
    }

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = unidade * 100 + dezena * 10 + centena;

    printf("O mesmo numero invertido: %i\n", invertido);

    return 0;
}
