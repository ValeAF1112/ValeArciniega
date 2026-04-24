#include <stdio.h>
#include <stdlib.h>
struct Alumne{
    char name[20];
    float cali;
    int act;
    int derecho;

};
int kmsnfs()
{
    struct Alumne pepe;

    printf("Ingrese el nombre del alumno:");
    fgets(pepe.name, 20, stdin);
    printf("Ingrese la calificacion del alumno:");
    scanf("%f",&pepe.cali);
    printf("Ingrese las actividades que realizo el alumno:");
    scanf("%i",&pepe.act);
    printf("Derecho: ");
    scanf("%i", &pepe.derecho);

    printf("\nDatos capturados: \n");
    printf("Nombre: %s", pepe.name);
    printf("Calificacion: %.2f.\n", pepe.cali);
    printf("Actividades: %i.\n", pepe.act);
    printf("Derecho: %i.\n", pepe.derecho);

    return 0;
}
