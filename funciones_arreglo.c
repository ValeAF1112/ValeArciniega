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

void filtrar(int origen[], int destino[], int n, int *j){
    int i;
    for(i = 0; i < n; i ++){
        if(origen[i] % 2 != 0){
           destino[(*j)] = origen[i];
           (*j) ++;
        }
    }
}

void archivo(int destino[], int j){
    int i;
    FILE *f;
    f = fopen("resultado.txt", "w");
    for(i = 0; i < j; i ++){
        fprintf(f, "%d ", destino[i]);
    }
    fclose(f);
}

int main()
{
    int n = 0, j = 0;
    printf("Ingrese cuantos numeros desea agregar al arreglo: ");
    scanf("%d", &n);
    int array[n];
    int d[j];


    capturar(array, n);
    mostrar(array, n);
    printf("\n");
    filtrar(array, d, n, &j);
    mostrar(d, j);
    archivo(d, j);


    return 0;
}
