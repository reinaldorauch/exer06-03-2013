/**
 * Exercício 5, lista de exercícios 06-03-2013
 * Programa que calcula média ponderada de duas notas
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	float nota1, peso1, nota2, peso2;

	printf("%s\n", "Programa que calcula média ponderada de duas notas:");
	printf("%s\n", "Digite a primeira nota:");
	scanf("%f", &nota1);

	printf("%s\n", "Ditite o peso da primeira nota:");
	scanf("%f", &peso1);

	printf("%s\n", "Digite a segunda nota:");
	scanf("%f", &nota2);

	printf("%s\n", "Digite o peso da segunda nota:");
	scanf("%f", &peso2);

	printf("%s %f\n", "A média ponderada entre estas duas notas é de:", (((nota1 * peso1) + (nota2 * peso2))/(peso1 + peso2)));

	return 0;
}