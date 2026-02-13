#include<stdio.h>

int beca(){

    int P, R;

    printf("Ingrese su promedio sobre 100:");
    scanf("%i", &P);
    printf("Ingrese la cantidad de materias que tiene reprobadas: ");
    scanf("%i", &R);

    if(P >= 85 && R == 0)
        {
        printf("Usted cumple los requisitos para obtener la beca.");
}   else
        {
        printf("Usted no cumple los requisitos para la Beca.");
}

}
