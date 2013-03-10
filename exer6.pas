Program CalcRend ;

Var
	aplic, juros:real;
	
 Begin
 
 	writeln('Programa para o cálculo do rendimento de uma aplicação:');
 	writeln('Digite o montante aplicado/depositado:');
 	readln(aplic);
 	
 	writeln('Digite o valor dos juros');
 	readln(juros);
 	
 	write('O montante resultante da aplicação:');
 	writeln((aplic * juros)/100 + aplic);
  
 End.