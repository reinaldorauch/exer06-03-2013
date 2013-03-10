/**
 * Exercício 2, lista de exercícios dia 06-03-2013
 * Calcula a divisão de dois números reais, um pelo segundo
 */

#include <stdio.h>

int main(int argc, char const *argv[]) {

	float num1, num2;

	printf("%s\n", "Programa para o cálculo da divisão de dois números");

	printf("%s\n", "Digite o primeiro número:");
	scanf("%f", &num1);

	printf("%s\n", "Digite o segundo número:");
	scanf("%f", &num2);

	printf("%s %6.10f\n", "O quociente entre estes dois números é:", (num1 / num2));

	return 0;
}