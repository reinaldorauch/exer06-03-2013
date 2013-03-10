/**
 * Exercício 4, lista de exercícios do dia 06-03-2013
 * Programa que calcula a média aritmética entre três notas
 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

	float nota1, nota2, nota3, res;

	printf("%s\n", "Programa para o cálculo da média aritmética entre três notas:");
	printf("%s\n", "Digite a primeira nota:");
	scanf("%f", &nota1);

	printf("%s\n", "Digite a segunda nota:");
	scanf("%f", &nota2);

	printf("%s\n", "Digite a terceira nota:");
	scanf("%f", &nota3);

	res = ((nota1+nota2+nota3)/3);

	printf("%s: %2.0f, %2.0f e %2.0f, %s %2.2f\n", "A média aritmética entre ", nota1, nota2, nota3, "é: ", res);

	return 0;
}