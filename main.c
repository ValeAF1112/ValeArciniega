#include <stdio.h>
#include <stdlib.h>

void capturar(int v[3][3], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j ++){
            printf("Ingrese el elemento que va en la fila %i, columna %i: ", i + 1, j + 1);
            scanf("%i", &v[i][j]);
        }
    }
}

void mostrar(int v[3][3], int n){
    int i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j ++){
            printf("%i ", v[i][j]);
        }
        printf("\n");
    }
}

int diagonal(int v[3][3], int n){
    int i, j, c = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j ++){
            if(i == j){
                c += v[i][j];
            }
        }
    }
    return c;
}

int main()
{
    int v[3][3];
    int n = 3;

    capturar(v, n);
    mostrar(v, n);
    int c = diagonal(v, n);
    printf("\nLa suma de la diagonal es de: %i\n", c);

    FILE *f;
    f = fopen("tablero.txt", "a");
    fprintf(f, "\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j ++){
            fprintf(f, "%i ", v[i][j]);
        }
        fprintf(f, "\n");
    }
    fprintf(f, "\n La suma de la diagonal es de:%i", c);

    fclose;

    return 0;
}
