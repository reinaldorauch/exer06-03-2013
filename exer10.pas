Program AreaCirculo ;

Var
	raio, area: real;
 Begin
  	writeln('Programa que calcula a área de um círculo');
  	writeln('Escreva o raio do círculo:');
  	readln(raio);
  	
  	area := PI * sqr(raio);
  	
  	write('A área do círculo de raio ', raio, ' é de ', area);
 End.