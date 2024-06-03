#include <stdio.h>
void main() {
    float n1, n2, n3, ef, tf, z, promedio, notaf;
    z=1;
    while (z == 1) {
        //Se pide que se ingrese las notas del estudiante
    printf("Escribe la primera nota\n");
    scanf("%f", &n1);
    printf("Escribe la segunda nota\n");
    scanf("%f", &n2);
    printf("Escribe la trercera nota\n");
    scanf("%f", &n3);
    printf("Escribe la nota del examen final\n");
    scanf("%f", &ef);
    printf("Escribe el trabajo final \n");
    scanf("%f", &tf);
    //Se selecciona si las notas son mayores o iguales a 0 y menores o iguales a 10, para proceder con la ejecución del cálculo de la calificación final
    if (n1>= 0 && n1<= 10 && n2>= 0 && n2<= 10 &&  n3>= 0 && n3<= 10 && ef>= 0 && ef<= 10 && tf>= 0  && tf<= 10 ) {
        promedio=(n1 + n2 + n3) / 3;
        notaf =promedio*0.55 + ef*0.3 + tf*0.15;
        printf("La nota final del estudiante es de: %.2f" "\n", notaf);
        printf ("Desea continuar? si = 1, no= 0" "\n");
        scanf ("%f",&z);
    }else {
        printf ("Los valores ingresados son incorrectos, volver a ingresar los datos");
    }
    }
}
