Program CoverterSegundos ;

Const
	FATOR = 60;
	
Var
	seg, min, horas: integer;

Begin

	writeln('Converta segundos para horas, minutos e segundos!');
	writeln('Digite a quantidade de segundos para a conversão:');
	readln(seg);
	
	horas := seg div (FATOR * FATOR);
	min := (seg mod (FATOR * FATOR)) div FATOR;
	seg := seg mod FATOR;
	
	writeln('Os segundos convertidos ficam: ', horas, ':', min, ':', seg);
 
End.