#include <stdio.h>
#include <stdlib.h>

//1er:

int pedirNumero(void);
float sacarPromedio(int suma, int cantidad);
/** \brief
 *Retorna 1 si el alumno aprobo la materia
 *retorna 0 si el alumno no aprobo la materia
 * \param notaMinima int
 *es la nota minima para aprobar la materia
 * \param nota int
 *es la nota que se saco el alumno
 * \return int
 * 0 para no aprobo
 *  1 para aprobado
 */
int sacarAprobacion(int notaMinima, int nota);

int main()
{
    int elNumeroIngresado;
    float promedio;
    int estaAprobado;
    elNumeroIngresado=pedirNumero();
    printf("El numero ingresado fue: %d",elNumeroIngresado);
    promedio=sacarPromedio(94,5);
    printf("El promedio ingresado fue: %f",promedio);
    estaAprobado=sacarAprobacion(6,3);
    if(estaAprobado==1)
        {
            printf("\nAprobo");
        }
    else
        {
            printf("\nNo aprobo");
        }








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


int sacarAprobacion(int notaMinima, int nota)
{
    float retorno;
    if(nota >= notaMinima)
        {
            return 1;
        }
    else
        {
            return 0;
        }

    return retorno;
}

// \brief
//Ingrese la nota de 5 alumnos (entre 0 y 10);
//informar cuantos aprobaron
//el promedio de notas de todos
//el promedio de notas de los que no aprobaron
// \return int
