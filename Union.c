#include <stdio.h>

union Dato{
    int entero;
    float decimal;
};

int lslkjdlka(){
    union Dato x;

    x.entero = 10;
    printf("%d\n", x.entero);


}
