#include <stdio.h>
#include <stdlib.h>
struct Alumne{
    char name[30];
    float cali;
    int act;
    int derecho;

};

int kjfuhajfho()
{
    struct Alumne grupo[3];

    for(int i = 0; i < 3; i++){
        printf("Ingrese el nombre del %i alumno:", i+1);
        fgets(grupo[i].name, 30, stdin);
        printf("Ingrese la calificacion del %i alumno:", i+1);
        scanf("%f",&grupo[i].cali);
        printf("Ingrese las actividades que realizo el %i alumno:", i+1);
        scanf("%i",&grupo[i].act);
        printf("Derecho del %i alumno: ", i+1);
        scanf("%i", &grupo[i].derecho);
        getchar();
    }

    for(int j = 0; j < 3; j++){
    printf("\nDatos capturados alumno %j: \n", j+1);
    printf("Nombre: %s", grupo[j].name);
    printf("Calificacion: %.2f.\n", grupo[j].cali);
    printf("Actividades: %i.\n", grupo[j].act);
    printf("Derecho: %i.\n", grupo[j].derecho);
    }

    return 0;
}
