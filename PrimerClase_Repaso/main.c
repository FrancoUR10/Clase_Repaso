#include <stdio.h>
#include <stdlib.h>

//1er:

int pedirNumero(void);

int main()
{
    int elNumeroIngresado;
    elNumeroIngresado=pedirNumero();
    printf("El numero ingresado fue: %d",elNumeroIngresado);








    return 0;
}

int pedirNumero()
{
    int miNumero;
    //proceso
    //miNumero>10
    do
        {
            printf("\nIngrese un numero: ");
            scanf("%d",&miNumero);
        }
        while(miNumero < 0 || miNumero > 10);


        return miNumero;
}
