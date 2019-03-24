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
 int sacarAprobados(int notas);
 int sacarNumero(void);

 int main()
 {
     float promedioNoAprobados=0;
     int cantidadNoAprobados=0;
     int sumaNoAprobados=0;
     float promedioGeneral=0;
     int cantidadDeNotas=0;
     int sumaTotal=0;
     int cantidadAprobados=0;
     int numeroIngresado;
     int i;
     for(i=0; i<5; i++)
        {
            numeroIngresado=sacarNumero();
            cantidadDeNotas++;
            sumaTotal=sumaTotal+numeroIngresado;
            if(sacarAprobados(numeroIngresado))
                {
                    cantidadAprobados++;
                }
            promedioGeneral=sacarPromedio(sumaTotal,cantidadDeNotas);
            if(numeroIngresado < 6)
                {
                    sumaNoAprobados=sumaNoAprobados+numeroIngresado;
                    cantidadNoAprobados++;
                    promedioNoAprobados=sacarPromedio(sumaNoAprobados,cantidadNoAprobados);
                }
        }
    printf("Cantidad de alumnos aprobados: %d\nPromedio de todos los alumnos: %f\nPromedio de no aprobados: %f\n",cantidadAprobados,promedioGeneral,promedioNoAprobados);


    return 0;
 }

 int sacarNumero()
 {
     int miNumero;
     do
        {
            printf("Ingrese la nota: ");
            scanf("%d",&miNumero);
        }
        while(miNumero < 0 || miNumero > 10);

    return miNumero;
 }

 int sacarAprobados(int notas)
 {
     int numeroDeAprobados=0;
     if(notas >= 6)
        {
            numeroDeAprobados++;
        }
    return numeroDeAprobados;
 }

 float sacarPromedio(int suma, int cantidad)
 {
     float promedio=0;
     promedio= (float)suma/cantidad;

     return promedio;
 }
