Program AreaTriangulo ;

Var
	lado1, lado2, lado3, semiper, area: real;

 Begin
      writeln('Dado os lados do tri�ngulo, calcula a sua respectiva �rea');
      writeln('Digite o comprimento do primeiro lado do tri�ngulo:');
      readln(lado1);
      
      writeln('Digite o comprimento do segundo lado do tri�ngulo:');
      readln(lado2);
      
      writeln('Digite o comprimento do terceiro lado do tri�ngulo:');
      readln(lado3);
      
      semiper := (lado1 + lado2 + lado3)/2;
      
      area := sqrt(semiper * (semiper - lado1) * (semiper - lado2) * (semiper - lado3));
      
      writeln('A �rea do tri�ngulo de lado com as medidas fornecidas � de:', area);
 End.