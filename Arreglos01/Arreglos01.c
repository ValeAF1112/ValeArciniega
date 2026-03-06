#include <stdio.h>

int main()
{
    float temp1, temp2;
    float temp[24];
    int dummy;
    temp[0] = 1.5;
    temp[1] = 2.5;

    printf("Direccion de memoria de 2 floats: %i\n%i\n", &temp1, &temp2);
    printf("Direccion de &temp[24]: %i\n", &temp[23]);
    printf("Direccion de temp[24]: %i\n", temp);
    printf("Direccion de &dummy: %i\n", &dummy);
    printf("%f", temp[0]);
    printf("\n%f", temp[1]);

    return 0;
}
