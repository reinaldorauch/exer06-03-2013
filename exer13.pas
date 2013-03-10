Program CoverterPeso ;

Const
	ACRECIMO = 5;
	FATOR = 1000;

Var
	peso: real;

 Begin
 
 	writeln('Converta seu peso para gramas!');
 	writeln('Digite seu peso em quilos (Kg):');
 	readln(peso);
 	
 	peso := peso * FATOR;
 	
 	writeln('Seu peso em gramas é :', peso, ' g');
 	writeln('Seu peso acrecido de 5% é de: ', ((peso * ACRECIMO)/100 + peso), ' g');
  
 End.