#include <stdio.h>
#include <string.h>

int main(){

    char nombre1[20];
    char nombre2[20];
    char lista[5][50];
    int N = 3;
    int longitud;
    char name[15], lastname[15], full_name[30];

    printf("\tEjemplo funcion fgets:\n");
    printf("Ingrese el primer nombre: ");
    fgets(nombre1, sizeof(nombre1), stdin);

    printf("Ingrese el segundo nombre: ");
    fgets(nombre2, sizeof(nombre2), stdin);
    printf("\n%s", nombre1);
    printf("%s\n", nombre2);

    printf("\tEjemplo funcion fgets pero con lista(para varios nombres) y funcion strlen:\n");
    for(int i = 0; i < N; i ++){
        printf("Ingrese el nombre numero %i:", i + 1);
        fgets(lista[i], sizeof(lista[i]), stdin);
    }
    for(int j = 0; j < N; j ++){
        printf("\n%s", lista[j]);
        longitud = strlen(lista[j]);
        printf("La longitud del nombre %i de la lista es: %d\n", j+1, longitud);
    }

    printf("\tEjemplo funcion strcpy, strcat y strcomp: \n");
    printf("Ingrese su nombre: ");
    fgets(name, sizeof(name), stdin);
    printf("Ingrese su apellido: ");
    fgets(lastname, sizeof(lastname), stdin);

    printf("%s\n", name);
    printf("%s\n", lastname);

    strcpy(full_name, name);
    strcat(full_name, lastname);
    int Comp = strcmp(name, lastname);

    printf("%s\n", full_name);
    printf("%d", Comp);


    return 0;
}
