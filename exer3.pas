Program DivEmod;

Var
	num1: integer;
	num2: integer;
	
 Begin
  
  	writeln('Programa que calcula a divisão e o módulo dela entre dois números:');
  	writeln('Digite o primeiro número:');
  	readln(num1);
  	
  	writeln('Digite o segundo número:');
  	readln(num2);
  	
  	write('O quociente entre o primeiro e o segundo número é:');
  	writeln(num1 / num2);
  	
  	write('O módulo da divisão entre o primeiro e o segundo número é:');
  	write(num1 mod num2);
  
 End.