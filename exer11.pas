Program CalculoDelta ;

Var
	a, b, c, delta: real;

Begin
	writeln('Programa para o cálculo do delta de uma função do segundo grau, dados os coeficientes a, b e c');
	writeln('Digite o primeiro coeficiente:');
	readln(a);
	
	writeln('Digite o segundo coeficiente:');
	readln(b);
	
	writeln('Digite o terceiro coeficiente:');
	readln(c);
	
	delta := sqr(b) - 4 * a * c;
	
	writeln('O delta resultante dos coeficientes: ', a, ',', b, ',', c, ' é: ', delta);
End.