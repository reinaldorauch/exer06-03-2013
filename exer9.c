/**
 * Exercício 9, Lista de Exercícios 06-03-2013
 * Programa que calcula a área de um triângulo
 */

#include <stdio.h>
#include <math.h>

int main()
{

	float lado1, lado2, lado3, semiper, area;

	printf("%s\n", "Dado os lados do triângulo, calcula a sua respectiva área");
	printf("%s\n", "Digite o comprimento do primeiro lado do triângulo:");
	scanf("%f", &lado1);

	printf("%s\n", "Digite o comprimento do segundo lado do triângulo:");
	scanf("%f", &lado2);

	printf("%s\n", "Digite o comprimento do terceiro lado do triângulo:");
	scanf("%f", &lado3);

	/**
	 * Cálculo do semiperimetro
	 */
	semiper = (lado1 + lado2 + lado3)/2;

	/**
	 * Cálculo da área por semiperímetro
	 */
	area = sqrt(semiper * (semiper - lado1) * (semiper - lado2) * (semiper - lado3));

	printf("%s: %f\n", "Área do triângulo dos lados fornecidos é de", area);

	return 0;
}