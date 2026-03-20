#include <stdio.h>
#include <string.h>

int main()
{
    /*char nombre[4][15];

    printf("Ingrese su primer nombre: ");
    fgets(nombre[0], sizeof(nombre[0]), stdin);
    printf("\nIngrese su segundo nombre: ");
    fgets(nombre[1], sizeof(nombre[1]), stdin);
    printf("\nIngrese su primer apellido: ");
    fgets(nombre[2], sizeof(nombre[2]), stdin);
    printf("\nIngrese su segundo apellido: ");
    fgets(nombre[3], sizeof(nombre[3]), stdin);


    for(int i = 0; i < 4; i++){
    nombre[i][strcspn(nombre[i], "\n")] = 0;
    printf("%s ", nombre[i]);
    }

    for(int i = 0; i < 5; i++){
    printf("%d\n", &nombre[i]);
    }
    */

    int num[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%d\n", &num[i]);
        printf("%d\n", num[i]);
    }


    char nm[5];
    printf("%d\n", &nm);
    for(int i = 0; i < 5; i++){
    printf("%d\n", &nm[i]);
    }


    return 0;
}
