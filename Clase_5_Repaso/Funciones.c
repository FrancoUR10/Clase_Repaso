#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1

eLocalidad construirLocalidad()
{
    eLocalidad retornoLocalidad;

    printf("Ingrese el id de la localidad: ");
    scanf("%d",&retornoLocalidad.id);
    fflush(stdin);

    printf("Ingrese la descripcion de la localidad: ");
    gets(retornoLocalidad.descripcion);
    fflush(stdin);

    system("cls");


    return retornoLocalidad;
}

ePersona construirPersona(int idLocalidad)
{
    ePersona retornoPersona;

    printf("Ingrese el nombre de la persona: ");
    gets(retornoPersona.nombre);
    fflush(stdin);

    printf("Ingrese el apellido de la persona: ");
    gets(retornoPersona.apellido);
    fflush(stdin);

    printf("Ingrese la edad de la persona: ");
    scanf("%d",&retornoPersona.edad);
    fflush(stdin);


    return retornoPersona;
}

void mostrarPersona(ePersona unaPersona[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%s--%s--%d",unaPersona[i].apellido,unaPersona[i].nombre,unaPersona[i].edad);
    }
}

int cargarLocalidades(eLocalidad listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i]=construirLocalidad();
    }
    return 1;
}
void mostrarListadoLocalidades(eLocalidad listado[], int cantidadRegistros)
{
    int i;
    for(i=0; i<cantidadRegistros; i++)
    {
        mostrarLocalidad(listado[i]);
    }
}

void mostrarLocalidad(eLocalidad localidad)
{
    printf("Codigo: %d--Descripcion: %s\n",localidad.id,localidad.descripcion);
}
/*
int cargarPersonas(ePersona listado[],int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        listado[i]=construirPersona();
    }
    return 1;
}
*/
