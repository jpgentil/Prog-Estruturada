/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 07*/

#include <stdio.h>

int main(void)
{
    float real, dolares_totais; /*Os valores float devem ser separados por pontos e não por vírgula*/
    float cotacao_dolar = 5.66;
    printf("Quanto esta valendo o dolar hoje?: \n");
    scanf("%f", &cotacao_dolar);
    printf("Quantos reais voce tem?\n");
    scanf("%f", &real);

    dolares_totais = real / cotacao_dolar; /*Transforma o valor de dolares para reais*/

    printf("Em dolares voce tem: %.3f\n", dolares_totais);

    return 0;
}
