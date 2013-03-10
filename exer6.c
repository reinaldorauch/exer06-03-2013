/**
 * Exercício 6, lista de exercício 06-03-2013
 * Cálculo do rendimento de uma aplicação de juros simples
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	float aplic, juros;

	printf("%s\n", "Progrma para o cálculo do rendimento de uma aplicação de juros simples");
	printf("%s\n", "Digite o valor depositado/aplicado:");
	scanf("%f", &aplic);

	printf("%s\n", "Digite o valor dos juros:");
	scanf("%f", &juros);

	printf("%s: %10.2f\n", "O valor final da aplicação é de", ((aplic * juros)/100 + aplic));

	return 0;
}