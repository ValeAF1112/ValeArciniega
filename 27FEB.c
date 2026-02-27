#include <stdio.h>

void menu()
{
    printf("\nBienvenido al menu principal.\n");
    printf("\nIngrese: \n");
    printf("\t1. Analizar un numero. \n");
    printf("\t2. Calculadora. \n");
    printf("\t3. Salir. \n");
}
int calculadora(int opc, int num1, int num2)
{
    int c;
    if(opc == 1)
    {
        c = num1 + num2;
        printf("El resultado es = %d", c);
    }else if(opc == 2)
    {
        c = num1 - num2;
        printf("El resultado es = %d", c);
    }
}
void MenuCALC()
{
    printf("Ingrese la operacion que gusta realizar:\n");
    printf("\t1. Sumar\n");
    printf("\t2. Restar\n");
    printf("\t3. Regresar\n");
}
int main()

{
    int x, y, opcionP, opcionC;

do{

    menu();
    scanf("%d", &opcionP);


    switch(opcionP)
    {

    case 1: //Analizar un numero.
        printf("Opcion seleccionada: Analizar numero.\n");
        printf("Ingrese un numero entero:");
        scanf("%d", &x);

        if(x % 2 == 0){
            printf("El numero ingresado es Par");
        }
        else {
            printf("El numero es impar");
        }
        break;

    case 2: //Calculadora.
        printf("Opcion seleccionada: Calculadora.\n");
        printf("Ingrese el primer numero entero:\n");
        scanf("%d", &x);
        printf("Ingrese el segundo numero entero:\n");
        scanf("%d", &y);
        MenuCALC();
        scanf("%d", &opcionC);
        switch(opcionC)
        {
        case 1: //Suma.
            calculadora(opcionC, x, y);
            break;

        case 2: //Resta.
            calculadora(opcionC, x, y);
            break;
        case 3: //Regresar.
            printf("Termino la calculadora...");
            break;
        default:
            printf("Operacion no valida.\n");

        }

        break;

    case 3: //salir.
        printf("Fin del programa...");
        return 0;

    default:
        printf("Opcion no valida");
        printf("\nSeleccione otra operacion: \n");


    }
} while(opcionP != 3);

    return 0;
}

