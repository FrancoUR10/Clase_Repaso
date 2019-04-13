#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANIO 3
/*

Crear una estructura que se llame alumno, que tenga edad, altura, nombre, apellido.
Despues hacer la carga, las validaciones correspondiente, (si no tiene validaciones las invento).
Luego hacer el ordenamiento.
Luego mostrar la mejor nota.
El mas alto de los que aprobaron.
de los que miden mas de 1,80, el promedio de ellos.

*/
typedef struct{
    float precio ;
    char codigo[7];
}Producto;

int getPrecio(char *mensaje,float *elPrecio);
int getCodigo(char *mensaje,char *codigo);





/** \brief
 * vamos aadministrar los productos de un comercio
 * cod 6 caracteres
 *  precio

 * \return int
 *
 *
 */
int main()
{

    //char codigos[7][TAMANIO];
    Producto unProducto;
    Producto ArrayProductos[TAMANIO];
    int i;
    int j;
    while(getPrecio("ingrese precio  , por fa!!!",&unProducto.precio)==0){
        printf("error ...");
       }


        while(getCodigo("ingrese Codigo  , por fa!!!",unProducto.codigo)==0){
        printf("error ...");
       }
    printf("codigo:%s precio: %f \n",unProducto.codigo,unProducto.precio);

     for(i=0;i<TAMANIO;i++)
    {
       while(getPrecio("ingrese precio  , por fa!!!",&ArrayProductos[i].precio)==0){
        printf("error ...");
       }


        while(getCodigo("ingrese Codigo  , por fa!!!",ArrayProductos[i].codigo)==0){
        printf("error ...");
       }

    }

    for(i=0;i<TAMANIO;i++)
    {
        printf("codigo:%s precio: %f \n",ArrayProductos[i].codigo,ArrayProductos[i].precio);
    }

    for(i=0;i<TAMANIO;i++)
    {
        for(j=0;j<TAMANIO;j++)
        {
            if(ArrayProductos[i].precio<ArrayProductos[j].precio)
            {
                Producto aux=ArrayProductos[i];
                ArrayProductos[i]=ArrayProductos[j];
                ArrayProductos[j]=aux;
            }
        }
    }
    for(i=0;i<TAMANIO;i++)
    {
        printf("codigo:%s precio: %f \n",ArrayProductos[i].codigo,ArrayProductos[i].precio);
    }
    printf("De array a estruturas \n");
    return 0;
}
int getCodigo(char *mensaje,char *codigo)
{
    char ingreso[50];
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    if( strlen(ingreso)==6)
    {
        strcpy(codigo,ingreso);
        retorno=1;
    }
    return retorno;

}
int getPrecio(char *mensaje,float *elPrecio)
{
    char ingreso[50];
    float auxPrecio;
    int retorno=0;
    printf(mensaje);
    scanf("%s",ingreso);
    auxPrecio=atof(ingreso);
    if(auxPrecio>0)
    {
      *elPrecio  = auxPrecio;
      retorno= 1;
    }
    return retorno;

}
