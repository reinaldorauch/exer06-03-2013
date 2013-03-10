/**
 * Exercício 3, lista de exercícios do dia 06-03-2013
 * Programa que calcula a divisão e o módulo dela
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num1, num2;

	printf("%s\n", "Programa que calcula a divisão e o módulo dela entre dois números");
	printf("%s\n", "Digite o primeiro número:");
	scanf("%d", &num1);

	printf("%s\n", "Digite o segundo número:");
	scanf("%d", &num2);

	printf("%s: %d\n", "A divisão entre o primeiro e o segundo números é", (num1 / num2));
	printf("%s: %d\n", "O módulo da divisão entre o primeiro e o segundo números é", (num1 % num2));

	return 0;
}