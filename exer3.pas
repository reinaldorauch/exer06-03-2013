Program DivEmod;

Var
	num1: integer;
	num2: integer;
	
 Begin
  
  	writeln('Programa que calcula a divis�o e o m�dulo dela entre dois n�meros:');
  	writeln('Digite o primeiro n�mero:');
  	readln(num1);
  	
  	writeln('Digite o segundo n�mero:');
  	readln(num2);
  	
  	write('O quociente entre o primeiro e o segundo n�mero �:');
  	writeln(num1 / num2);
  	
  	write('O m�dulo da divis�o entre o primeiro e o segundo n�mero �:');
  	write(num1 mod num2);
  
 End.