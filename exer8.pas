Program CalculoSalarioMin ;

Var
	sal, minsal: real;

 Begin
 
 	writeln('Cálculo do seu salário em salários mínimos:');
 	writeln('Digite seu salário mensal:');
 	
	readln(sal);
	
	writeln('Insira o salário mínimo atual:');
	readln(minsal);
	
	write('Seu salário são ', (sal/minsal), 'salários mínimos');
  
 End.