#include <stdio.h>
void main (){
	float per, are, lado, ancho;
	printf ("Cu�l es el valor del lado del rect�ngulo?" "\n");
	scanf ("%f", & lado);
	printf ("Cu�l es el valor del ancho del rect�ngulo?" "\n");
	scanf ("%f", & ancho);
	are=lado*ancho;
	per=2*lado+2*ancho;
	printf ("El valor del per�metro del recat�ngulo es de: %.2f \nEl valor del �rea del rect�ngulo es de: %.2f", per, are);
}
