/**
 * Exercício 7, lista de excercício 06-03-2013
 * Cálculo da tabuáda de um número
 */

#include <stdio.h>

int main()
{

	int num;

	printf("%s\n", "Programa para o cálculo da tabuada de um número");
	printf("%s\n", "Digite o número para o cálculo da tabuada:");
	scanf("%d", &num);

	for (int i = 1; i <= 10; ++i)
	{
		printf("%d x %d = %d\n", num, i, (num * i));
	}

	return 0;
}