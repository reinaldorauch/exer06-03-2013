Program CalculoSalarioMin ;

Var
	sal, minsal: real;

 Begin
 
 	writeln('C�lculo do seu sal�rio em sal�rios m�nimos:');
 	writeln('Digite seu sal�rio mensal:');
 	
	readln(sal);
	
	writeln('Insira o sal�rio m�nimo atual:');
	readln(minsal);
	
	write('Seu sal�rio s�o ', (sal/minsal), 'sal�rios m�nimos');
  
 End.