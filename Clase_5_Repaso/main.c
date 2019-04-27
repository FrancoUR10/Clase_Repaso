#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAM 3

int main()
{
    eLocalidad localidades[TAM];
    ePersona personas[TAM];

    cargarLocalidades(localidades,TAM);

    mostrarListadoLocalidades(localidades,TAM);

    inicializarListado(personas,TAM);
    cargarUnaPersona(personas,TAM);
    mostrarPersona(personas,1);















    system("pause");
    system("cls");

    return 0;
}
