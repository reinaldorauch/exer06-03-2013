/**
 * Exercício 12, lista de exercícios 06-03-2013
 * Programa para calcular o imposto de renda sendo ele 5% do salário
 */

/**
 * Declarando uma constante para a porcentagem de imposto
 */
#define	IMPOSTO_RENDA 5

#include <stdio.h>

int main()
{

	float salario;

	printf("%s\n", "Calcule seum imposto de renda!");
	printf("%s\n", "Digite seu salário:");
	scanf("%f", &salario);

	printf("%s: %f\n", "O seu imposto de renda será de", ((salario * IMPOSTO_RENDA)/100));

	return 0;
}