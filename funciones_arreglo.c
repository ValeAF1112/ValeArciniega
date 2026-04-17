#include <stdio.h>
#include <stdlib.h>

void capturar(int arreglo[], int n){
    for(int i = 0; i < n; i ++){
        printf("\nIngrese el valor %i del arreglo: ", i + 1);
        scanf("%i", &arreglo[i]);

    }

}
void mostrar(int arreglo[], int n){
    int i;
    for(i = 0; i < n; i ++){
        printf("%d ", arreglo[i]);
    }
}

void filtrar(int origen[], int destino[], int n){
    int i, j= 0;
    for(i = 0; i < n; i ++){
        if(origen[i] % 2 != 0){
           destino[j] = origen[i];
           j ++;
        }
    }
}

int main()
{
    int n = 6, i;
    int array[n];
    int d[3];

    capturar(array, n);
    mostrar(array, n);
    printf("\n");
    filtrar(array, d, n);

    for(i = 0; i < 3; i ++){
        printf("%d ", d[i]);
    }


    return 0;
}
