#include <stdio.h>
#include <stdlib.h>

//1er:

int pedirNumero(void);
float sacarPromedio(int suma, int cantidad);

int main()
{
    int elNumeroIngresado;
    float promedio;
    elNumeroIngresado=pedirNumero();
    printf("El numero ingresado fue: %d",elNumeroIngresado);
    promedio=sacarPromedio(94,5);
    printf("El promedio ingresado fue: %f",promedio);








    return 0;
}

int pedirNumero()
{
    int miNumero;
    //proceso
    //miNumero=10
    do
        {
            printf("\nIngrese un numero: ");
            scanf("%d",&miNumero);
        }
        while(miNumero < 0 || miNumero > 10);


        return miNumero;
}

float sacarPromedio(int suma, int cantidad)
{
    float retorno;
    retorno = (float)suma / cantidad;

    return retorno;
}
