Program CalcRend ;

Var
	aplic, juros:real;
	
 Begin
 
 	writeln('Programa para o c�lculo do rendimento de uma aplica��o:');
 	writeln('Digite o montante aplicado/depositado:');
 	readln(aplic);
 	
 	writeln('Digite o valor dos juros');
 	readln(juros);
 	
 	write('O montante resultante da aplica��o:');
 	writeln((aplic * juros)/100 + aplic);
  
 End.