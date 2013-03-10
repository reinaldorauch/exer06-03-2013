/**
 * Ler duas variáveis e trocar seus conteúdos
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a, b, aux;

	printf("%s\n", "Troca de valor entre duas variáveis:");
	printf("%s\n", "Digite o primeiro valor:");
	scanf("%d", &a);

	printf("%s\n", "Digite o segundo valor:");
	scanf("%d", &b);

	printf("%s: %d, %d\n", "valores anteriores", a, b);

	aux = a;
	a = b;
	b = aux;

	printf("%s: %d, %d\n", "Valores posteriores", a, b);

	return 0;
}