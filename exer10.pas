Program AreaCirculo ;

Var
	raio, area: real;
 Begin
  	writeln('Programa que calcula a �rea de um c�rculo');
  	writeln('Escreva o raio do c�rculo:');
  	readln(raio);
  	
  	area := PI * sqr(raio);
  	
  	write('A �rea do c�rculo de raio ', raio, ' � de ', area);
 End.