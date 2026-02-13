#include <stdio.h>

int main(){

    int a, i = 2;

    printf("Ingrese un numero: ");
    scanf("%i", &a);


    while(i < a){
        if(a % i == 0){
            printf("El numero no es primo\n");
            break;
        }
        else if(a % i != 0){
            printf("El numero es primo ");
            break;
        }
        i++;

    }

    return 0;
}

