Program MedCalc ;

Var
	nota1, nota2, nota3: real;
	
 Begin
  
  	writeln('Programa para o c�lculo da m�dia entre tr�s notas:');
  	writeln('Digite a primeira nota:');
  	readln(nota1);
  	
  	writeln('Digite a segunda nota:');
  	readln(nota2);
  	
  	writeln('Digite a terceira nota:');
  	readln(nota3);
  	
  	writeln('A m�dia entre:');
  	writeln(nota1);
  	writeln(nota2);
  	writeln(nota3);
  	write('� de: ');
  	writeln((nota1+nota2+nota3)/3);
  
 End.