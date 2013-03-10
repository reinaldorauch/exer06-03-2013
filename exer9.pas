Program AreaTriangulo ;

Var
	lado1, lado2, lado3, semiper, area: real;

 Begin
      writeln('Dado os lados do triângulo, calcula a sua respectiva área');
      writeln('Digite o comprimento do primeiro lado do triângulo:');
      readln(lado1);
      
      writeln('Digite o comprimento do segundo lado do triângulo:');
      readln(lado2);
      
      writeln('Digite o comprimento do terceiro lado do triângulo:');
      readln(lado3);
      
      semiper := (lado1 + lado2 + lado3)/2;
      
      area := sqrt(semiper * (semiper - lado1) * (semiper - lado2) * (semiper - lado3));
      
      writeln('A área do triângulo de lado com as medidas fornecidas é de:', area);
 End.