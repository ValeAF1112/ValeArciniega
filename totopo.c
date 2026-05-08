#include <stdio.h>

struct barco
{
    char Nombre[20];
    int peso;
    int tripulacion;
    int size;
};

int f_bajan(struct barco *p)
{
    p->tripulacion = p->tripulacion - 2;
    if(p -> tripulacion <= 0)
        return 0;
    else
        f_bajan(p);

}

int main()
{
    struct barco *totopo;
    struct barco toto;
    toto.peso = 1000;
    toto.tripulacion = 13;
    totopo = &toto;
    f_bajan(totopo);
    printf("%d", toto.tripulacion);


return 0;
}
