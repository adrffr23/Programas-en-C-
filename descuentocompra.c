#include <stdio.h>
void main(){
	float descuento, compra, pf;
	printf("Cuál es la compra e su producto:" "\n");
	scanf ("%f",&compra);
	descuento = compra *0.15;
	pf= compra-descuento;
	printf ("El precio total de su compra es de %.2f", pf);
}
