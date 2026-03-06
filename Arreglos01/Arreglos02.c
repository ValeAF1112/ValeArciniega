#include <stdio.h>

int main()
{
    int N = 4;
    float temp[N];
    int i = 0, j = 0;

    for(j; j < N; j++){
        printf("Ingrese la temperatura %i:", j+1);
        scanf("%f", &temp[j]);
    }

    for(i; i < N; i ++){
        printf("\nLas temperatura %i:\n", i+1);
        printf("%.2f\n", temp[i]);
    }
    return 0;
}

