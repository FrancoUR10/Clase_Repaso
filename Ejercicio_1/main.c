#include <stdio.h>
#include <stdlib.h>

/** \brief
 * ingrese la nota de 5 alumnos (entre 0 y 10)
 * informar cuantos aprobaron
 * el promedio de notas de todos
 * el promedio de notas de los que no aprobaron
 * \return int
 *
 */


float sacarPromedio(int suma, int cantidad);
int sacarAprobados(int nota, int notaAprobados);
int sacarNota(void);

int main()
{
    float promedioNoAprobados=0;
    float promedioGeneral=0;
    int cantidadNoAprobados=0;
    int cantidadAprobados=0;
    int sumaTotal=0;
    int sumaNoAprobados=0;
    int notaIngresada;
    int i;
    for(i=0; i<5; i++)
        {
            notaIngresada=sacarNota();
            sumaTotal=sumaTotal+notaIngresada;
            if(sacarAprobados(6,notaIngresada))
                {
                    cantidadAprobados++;
                }
            else
                {
                    sumaNoAprobados=sumaNoAprobados+notaIngresada;
                    cantidadNoAprobados++;
                }
        }
        promedioGeneral=sacarPromedio(sumaTotal,i);
        promedioNoAprobados=sacarPromedio(sumaNoAprobados,cantidadNoAprobados);
        printf("Cantidad de aprobados: %d\nPromedio de las notas en general: %f\nPromedio de no aprobados: %f\n",cantidadAprobados,promedioGeneral,promedioNoAprobados);








    return 0;
}

int sacarNota()
{
    int miNota;
    do
        {
            printf("Ingrese la nota: ");
            scanf("%d",&miNota);
        }
        while(miNota < 0 || miNota > 10);

        return miNota;
}

int sacarAprobados(int nota, int notaAprobados)
{
    int retorno;
    if(notaAprobados >= nota)
        {
            retorno=1;
        }
    else
        {
            retorno=0;
        }

    return retorno;
}

float sacarPromedio(int suma, int cantidad)
{
    float miPromedio=0;
    miPromedio= (float)suma/cantidad;
    return miPromedio;
}
