#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"
#define TAM 3

int main()
{
    eLocalidad localidades[TAM];

    cargarLocalidades(localidades,TAM);

    mostrarListadoLocalidades(localidades,TAM);
















    system("pause");
    system("cls");
    return 0;
}
