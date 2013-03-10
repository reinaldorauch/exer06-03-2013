Program ImpostoRenda;

Const
	IMPOSTO_RENDA = 5;

Var
	salario: real;

Begin
 	writeln('Calcule seum imposto de renda!');
 	writeln('Digite seu salário:');
 	readln(salario);
 	
 	writeln('O seu imposto de renda será de: ', ((salario * IMPOSTO_RENDA)/100));
End.