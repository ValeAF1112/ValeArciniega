#include <stdio.h>
#include <stdlib.h>
int f_doble (int a){
    return a * 2;
}

void f_triple (int *a){
    (*a) = (*a) * 3;
}
int f_resta (int a){
    a -= 2;
    if(a <= 0)
        return a;
    else
        f_resta(a);
}
int main()
{
    /*int a;
    printf("Dame un No. del 1 al 100: ");
    scanf("%d", &a);

    printf("Doble de a: %i\n", f_doble(a));
    f_triple(&a);
    printf("Triple de a: %d\n", a);*/

    /*int x = 5;
    int *p = &x;

    p = &x;

    printf("%d\n", x);
    printf("%d\n", p);
    printf("%d\n", *p);*/

    int a;
    printf("Dame un No. del 1 al 100: ");
    scanf("%d", &a);
    printf("%d", f_resta(a));

    return 0;
}
