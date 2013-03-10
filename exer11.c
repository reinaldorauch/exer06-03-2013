/**
 * Exercício 11, lista de exercícios 06-03-2013
 * Programa para o cálculo do delta de uma função do segundo grau dados seus coeficientes a, b e c
 */

#include <stdio.h>
#include <math.h>

int main()
{

	float a, b, c, delta;

	printf("%s\n", "Programa para o cálculo do delta de uma função do segundo grau, dados os coeficientes a, b e c");
	printf("%s\n", "Digite o primeiro coeficiente:");
	scanf("%f", &a);

	printf("%s\n", "Digite o segundo coeficiente:");
	scanf("%f", &b);

	printf("%s\n", "Digite o terceiro coeficiente:");
	scanf("%f", &c);

	/**
	 * Calculando o delta
	 */
	delta = pow(b, 2) - 4 * a * c;

	printf("%s, %f, %f, %f, %s, %f\n", "O delta resultante dos coeficientes", a, b, c, "é", delta);

	return 0;
}