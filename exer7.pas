Program Tabuada;

Var
	i, num:integer;

 Begin
	
	writeln('Programa para o cálculo da tabuada de um número:');
	writeln('Digite um número para o cálculo:');
	readln(num);
	
	for i:=1 to 10 do
		begin
			writeln(num, ' x ', i, ' = ', num * i);
		end;
	  
 End.