Program MedCalc ;

Var
	nota1, nota2, nota3: real;
	
 Begin
  
  	writeln('Programa para o cálculo da média entre três notas:');
  	writeln('Digite a primeira nota:');
  	readln(nota1);
  	
  	writeln('Digite a segunda nota:');
  	readln(nota2);
  	
  	writeln('Digite a terceira nota:');
  	readln(nota3);
  	
  	writeln('A média entre:');
  	writeln(nota1);
  	writeln(nota2);
  	writeln(nota3);
  	write('é de: ');
  	writeln((nota1+nota2+nota3)/3);
  
 End.