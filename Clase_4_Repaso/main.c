#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3

typedef struct
{
    float precio;
    char codigo[7];
}producto;

/** \brief
 * Vamos administrar los productos de un comercio
 * Codigo en 6 caracteres
 * Precio
 * \return int
 *
 */
/** \brief Verifica si el precio es un float
 *
 * \param mensaje char* El mensaje a mostrar
 * \param elPrecio float* El precio en 6 caracteres
 * \return int retorna 1 si se pudo y retorna 0 si no se pudo
 *
 */
int getPrecio(char *mensaje, float *elPrecio);

/** \brief Verifica si el rango del codigo es valido
 *
 * \param mensaje char* El mensaje a mostrar
 * \param codigo char* El codigo para verificar
 * \return int es valido si el codigo coincide con el rango de caracteres
 *
 */
int getCodigo(char *mensaje, char *codigo);


int main()
{
    producto miProducto[];

    int i;
    for(i=0;i<TAMANIO;i++)
    {
        while(getPrecio("Ingrese precio: ",&miProducto.precio)==0)
        {
            printf("Error...");
        }
        while(getCodigo("Ingrese codigo: ",miProducto[i].codigo)==0)
        {
            printf("Error...");
        }
    }
    for(i=0;i<TAMANIO;i++)
    {
        printf("Precio %f \n",precios[i]);
    }


    printf("De array a estructuras \n");


    return 0;
}

int getPrecio(char *mensaje, float *elPrecio)
{
    int retorno=0;
    char ingreso[50];
    printf(mensaje);
    scanf("%s",ingreso);
    float auxPrecio;
    auxPrecio=atof(ingreso);
    if(auxPrecio>0)
    {
        *elPrecio=auxPrecio;
        retorno=1;
    }

    return retorno;

}

int getCodigo(char *mensaje, char *codigo)
{
    int retorno=0;
    char ingreso[50];
    printf(mensaje);
    scanf("%s",ingreso);

    if(strlen(ingreso)<=7)
    {
        strcpy(codigo,ingreso);
        retorno=1;
    }
    return retorno;
}
