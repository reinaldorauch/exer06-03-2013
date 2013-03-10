/**
 * Exercício 10, lista de exercícios 06-03-2013
 * Programa que calcula a área de um círculo
 */

#include <stdio.h>
#include <math.h>

int main()
{

	float raio, area;

	printf("%s\n", "Programa que calcula a área de um círculo");
	printf("%s\n", "Escreva o raio do círculo:");
	scanf("%f", &raio);

	area = M_PI * pow(raio, 2);

	printf("%s: %f\n", "A área do círculo é de", area);

	return 0;
}