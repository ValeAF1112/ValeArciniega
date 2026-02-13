
#include <stdio.h>

int validacion(){

    int E, P, R;

    printf("Ingrese su Edad:");
    scanf("%i", &E);
    printf("Ingrese su Promedio sobre 100:");
    scanf("%i", &P);
    printf("Ingrese el numero de materias que tiene reprobadas:");
    scanf("%i", &R);

    if(P >= 90 && R == 0)
    {
        printf("\nUsted cumple con los requisitos para obtener la Beca.");
    }else if(R <= 2)
    {
        printf("\nPuede reincribirse para obtener la beca.");
    }else
    {
        printf("\nUsted esta en situacion critica.");
    }


    return 0;
}
