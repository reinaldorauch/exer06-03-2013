/**
 * Exercício 8, Lista de Exercícios dia 06-03-2013
 * Cálculo de salário em salário mínimo
 */

#include <stdio.h>

int main()
{

	/**
	 * Variáveis que guardam, respectivamente, o salário do usuário e o salário mínimo
	 */
	float sal, minsal;

	printf("%s\n", "Cálculo do seu salário em salários mínimos:");

	printf("%s\n", "Digite seu salário mensal:");
	scanf("%f", &sal);

	printf("%s\n", "Insira o salário mínimo atual:");
	scanf("%f", &minsal);

	printf("%s: %f %s\n", "Seu salário são", (sal/minsal), "salário(s) mínimo(s)");

	return 0;
}