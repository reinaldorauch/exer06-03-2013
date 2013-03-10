/**
 * Exercício 13, lista de exercícios 06-03-2013
 * Programa para converter o peso de uma pessoa em quilos para gramas e adicionar 5% disto
 */

/**
 * Declaração da constante de acréscimo
 */
#define ACRECIMO 5

/**
 * Declaração da consstante FATOR
 */
#define FATOR 1000

#include <stdio.h>

int main()
{

	float peso;

	printf("%s\n", "Converta seu peso para gramas!");
	printf("%s\n", "Digite seu peso em quilos (Kg):");
	scanf("%f", &peso);

	/**
	 * Convertendo o peso para gramas
	 */
	peso = peso * FATOR;

	printf("%s: %.0f g\n", "Seu peso em gramas é", peso);
	printf("%s: %.0f g\n", "Seu peso acrecido de 5% é de", ((peso * ACRECIMO)/100 + peso));

	return 0;
}