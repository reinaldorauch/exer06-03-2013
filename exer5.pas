Program CalMedPond;

Var
	nota1, peso1, nota2, peso2: real;

 Begin
	
	writeln('Programa para o c�lculo da m�dia ponderada entre dois valores');
	writeln('Escreva a primeira nota:');
	readln(nota1);
	
	writeln('Escreva o peso da segunda nota:');
	readln(peso1);
	
	writeln('Escreva a segunda nota:');
	readln(nota2);
	
	writeln('Escreva o peso da segunda nota:');
	readln(peso2);
	
	writeln('A m�dia ponderada entre estes dois valores �:');
	write(((nota1 * peso1)+(nota2 * peso2))/(peso1 + peso2));

 End.