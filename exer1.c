/**
 * Exercícios 06-03-2013, Número 1
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int num1, num2;

	printf("%s\n", "Exercício 1, da aula de programação 3, do dia 06-03-2013\nque soma dois números:");
	printf("%s\n", "Digite o primeiro número:");
	scanf("%d", &num1);

	printf("%s\n", "Digite o segundo número:");
	scanf("%d", &num2);

	printf("%s: %d\n", "A soma deste dois números é", (num1+num2));

	return 0;
}