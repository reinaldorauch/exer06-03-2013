Program Tabuada;

Var
	i, num:integer;

 Begin
	
	writeln('Programa para o c�lculo da tabuada de um n�mero:');
	writeln('Digite um n�mero para o c�lculo:');
	readln(num);
	
	for i:=1 to 10 do
		begin
			writeln(num, ' x ', i, ' = ', num * i);
		end;
	  
 End.