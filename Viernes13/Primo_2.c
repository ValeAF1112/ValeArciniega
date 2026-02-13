#include <stdio.h>

int primo(){

    int num;

    printf("Ingrese un numero:");
    scanf("%i", &num);

    if(num == 1 || num == 2 || num == 3 || num == 5 || num == 7){
        printf("El numero es primo.");
    }else{
        printf("El numero no es primo.");
    }


    return 0;
}
