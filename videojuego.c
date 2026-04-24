#include <stdio.h>
#include <stdlib.h>
struct videogame{
    char name[30];
    int year;
    int points;

};

int main()
{
    struct videogame juego[3];

    for(int i = 0; i < 3; i++){
        printf("Ingrese el nombre del %i juego:", i+1);
        fgets(juego[i].name, 30, stdin);
        printf("Ingrese el year del %i juego: ", i+1);
        scanf("%i",&juego[i].year);
        printf("Ingrese la puntuacion del %i juego:", i+1);
        scanf("%i",&juego[i].points);
        getchar();
    }

    for(int j = 0; j < 3; j++){
    printf("\nDatos capturados juego %j: \n", j+1);
    printf("Nombre: %s", juego[j].name);
    printf("Year: %i.\n", juego[j].year);
    printf("Puntuacion: %i.\n", juego[j].points);
    }

    return 0;
}

