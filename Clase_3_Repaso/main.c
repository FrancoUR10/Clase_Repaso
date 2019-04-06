#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dameEdadTres(int *edad,char *mensaje);
int dameEdadDos(int *edad, char *mensaje);
int dameEdad(int *edad,char *mensaje);
int dameEdadConIntentos(int *edad, char *mensaje, int intentos);

int main()
{



    int laEdad;
    int seCargo;
    seCargo=dameEdadConIntentos(&laEdad,"Ingrese la edad: ",3);
    printf("La edad es: %d",&laEdad);
    /*
    do
    {
        seCargo=dameEdadTres(&laEdad,"Ingrese la edad: ");
    }
    while(seCargo==0);


    if(dameEdadTres(&laEdad," dame la edad")==1)
    {
       printf("la edad es %d",laEdad);
    }else{
        printf("no se pudo ");
    }
    */

    return 0;
}


int dameEdad(int *edad,char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo  = scanf("%d",&aux);
    if(sePudo==1)
    {
        *edad=aux;
        // mal edad=aux;
    }
    return sePudo;

}

/** \brief Valida un entero y le paso un mensaje
 *
 * \param edad int* La edad ingresada
 * \param mensaje char* El printf inicial
 * \return int El valor ingresado
 *
 */
int dameEdadDos(int *edad, char *mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;
    printf(mensaje);
    scanf("%s",cadenaCargada);
    *edad=atoi(cadenaCargada);
    return sePudo;

}

int dameEdadTres(int *edad,char *mensaje)
{
    char cadenaCargada[20];
    int sePudo=0;
    int i;
    printf(mensaje);
    scanf("%s",cadenaCargada);
    for(i=0;i<strlen(cadenaCargada);i++)
    {
        if(cadenaCargada[i]<'0'|| cadenaCargada[i]>'9' && cadenaCargada!="\0")
        {
            sePudo=0;
        }
    }
    if(sePudo == 1)
    {
        *edad=atoi(cadenaCargada);
    }
    return sePudo;
}

int dameEdadConIntentos(int *edad, char *mensaje, int intentos)
{
    int sePudo;
    do
    {
        intentos++;
        sePudo=dameEdadTres(edad,mensaje);
    }
    while(sePudo==0 && sePudo<intentos);
    return sePudo;
}
