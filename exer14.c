/**
 * Exercício 14, lista de exercícios 06-03-2013
 * Programa para converter uma quantidade de segundos em horas, minutos e segundos
 */

/**
 * defindo constante de conversão
 */
#define FATOR 60

#include <stdio.h>

int main()
{

	int seg, horas, min;

	printf("%s\n", "Converta segundos para horas, minutos e segundos");
	printf("%s\n", "Digite a quantidade de segundos para a conversão:");
	scanf("%d", &seg);

	horas = seg / (FATOR * FATOR);
	min = (seg % (FATOR * FATOR)) / FATOR;
	seg = seg % FATOR;

	printf("%s: %d:%d:%d\n", "Os segundos convertidos ficam", horas, min, seg);

	return 0;
}