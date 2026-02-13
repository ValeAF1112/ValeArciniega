
#include <stdio.h>

int edad()
{
    int Edad;
    printf("Escriba su edad: ");
    scanf("%i", &Edad);

    if(Edad >= 18)
        {
        printf("El usuario es mayor de edad");
}   else
        {
        printf("El usuario es menor de edad");
}


    return 0;
}
