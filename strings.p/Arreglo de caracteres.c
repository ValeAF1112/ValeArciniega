#include <stdio.h>
#include <string.h>

int main(){

    char nombre1[20];
    char nombre2[20];
    char lista[5][50];
    int N = 3;
    int longitud;

    /*printf("Ingrese el primer nombre:\n");
    fgets(nombre1, sizeof(nombre1), stdin);

    printf("Ingrese el segundo nombre:\n");
    fgets(nombre2, sizeof(nombre2), stdin);
    printf("%s\n", nombre1);
    printf("%s", nombre2);*/

    for(int i = 0; i < N; i ++){
        printf("Ingrese el nombre numero %i:", i + 1);
        fgets(lista[i], sizeof(lista[i]), stdin);
    }
    for(int j = 0; j < N; j ++){
        printf("\n%s", lista[j]);
        longitud = strlen(lista[j]);
        printf("\nLa longitud del nombre %i de la lista es: %d", j+1, longitud);
    }

    return 0;
}
