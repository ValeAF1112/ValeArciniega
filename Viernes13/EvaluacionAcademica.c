#include <stdio.h>

int main(){

    int E, P, R, F;

    printf("Ingrese su edad:");
    scanf("%i", &E);

    printf("Ingrese su Promedio sobre 100:");
    scanf("%i", &P);

    printf("Ingrese la cantidad de materias que ha reprobado:");
    scanf("%i", &R);

    printf("Ingrese la cantidad de Faltas acumuladas que tiene:");
    scanf("%i", &F);

    if(P >= 90 && R == 0){
            if(F < 5){
        printf("Usted cumple los requisitos para recibir la beca.");
    }
    } else if(R <= 2){
        printf("Puede reinscribirse a la beca.");

    } else if(R > 3){
        printf("Usted no puede reinscribirse a la beca");

    } else if(R == 3){
         printf("Habrá revisión especial");

    } else if(P < 6 || R > 4 || F > 15){
        printf("Usted esta en situacion critica");

    }
    return 0;
}
