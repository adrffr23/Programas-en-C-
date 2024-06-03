#include <stdio.h>
void main (){
	float per, are, lado, ancho;
	printf ("Cuál es el valor del lado del rectángulo?" "\n");
	scanf ("%f", & lado);
	printf ("Cuál es el valor del ancho del rectángulo?" "\n");
	scanf ("%f", & ancho);
	are=lado*ancho;
	per=2*lado+2*ancho;
	printf ("El valor del perímetro del recatángulo es de: %.2f \nEl valor del área del rectángulo es de: %.2f", per, are);
}
