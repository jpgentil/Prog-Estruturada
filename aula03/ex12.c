
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

/*Atividade da aula 03 - Programação Estruturada Universidade Federal de Roraima - Discente: João Paulo Gentil Ferreira*/
/*Exercício 12*/
int main(void)
{
    /*Calcular o volume de um cilindro circular qualquer*/
    float raio, altura, volume;
    printf("Defina o valor do Raio: ");
    scanf("%f", &raio);
    printf("Defina o valor da altura: ");
    scanf("%f", &altura);

    volume = M_PI * raio * raio * altura;
    printf("O volume do cilindro circular e: %.2f\n", volume);
    return 0;
}
