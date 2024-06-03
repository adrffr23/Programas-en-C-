#include <stdio.h>

void main(){

	float salario, incremento, salariot;
	
	printf ("Cuál es el salario del obrero?" "\n");
	
	scanf ("%f", &salario);
	
	incremento = salario * 0.25;
	
	salariot = salario + incremento;
	
	printf ("El nuevo salario del obrero es de %.2f", salariot);
}
