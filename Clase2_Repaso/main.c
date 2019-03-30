#include <stdio.h>
#include <stdlib.h>
#include "funcionespuntero.h"

int main()
{
    int sePudo;
    float respuesta;

    sePudo=dividir(4,3,&respuesta);
    if(sePudo==1)
    {
        printf("La respuesta es %f ",respuesta);
    }
    else
    {
        printf("No se puede");
    }




    /*
    float division;
    int numeroUno=0;
    int numeroDos=0;
    while(dividir(numeroUno, numeroDos, &division))
    {
        //nada
    }
    printf("El resultado es: %f",&division);







    int miEdad;

    while(pedirEdad(&miEdad)==0)
    {
        //nada
    }
    printf("Su edad es %d",miEdad);


    if(pedirEdad(&miEdad)==1)
    {
        printf("Su edad es %d",miEdad);
    }
    else
    {
        printf("No se pudo");
    }
    printf("Hello world!\n");
    verSiAnda();
    int sueldo;
    printf("\n lugar sueldo %d",&sueldo);
    sueldo= 10000;
    cambiarValor(sueldo);
    printf("Por valor: %d\n",sueldo);
    cambiarReferencia(&sueldo);
    printf("Por referencia: %d\n",sueldo);
    */
    return 0;
}
