#include <stdio.h>
#include <stdlib.h>

// \brief
//Ingrese la nota de 5 alumnos (entre 0 y 10);
//informar cuantos aprobaron
//el promedio de notas de todos
//el promedio de notas de los que no aprobaron
// \return int

int sacarNota(void);
float sacarPromedio(int suma, int cantidad);

int main()
{
    int miNota=sacarNota();
    int suma = suma+miNota;
    int cantidad;
    float promedio=sacarPromedio(suma,cantidad);
    printf("La nota fue: %d",miNota);
    printf("El promedio es: %f",promedio);
    return 0;
}

int sacarNota(void)
{
    int contadorAprobados=0;
    int contador=0;
    int sumaAprobados=0;
    int suma=0;
    int promedioAprobados=0;
    int promedio=0;
    int nota;
    int intentos=0;
    do
    {
        printf("Ingrese las notas: ");
        scanf("%d",&nota);
        intentos++;
        contador++;
        suma=suma+nota;
        if(nota >=6 )
        {
            sumaAprobados=sumaAprobados+nota;
            contadorAprobados++;
        }

    }
    while(intentos < 5);
    promedio=sacarPromedio(suma,contador);
    promedioAprobados=sacarPromedio(sumaAprobados,contadorAprobados);

    printf("Promedio general: %d",promedio);
    printf("Promedio aprobados: %d",promedioAprobados);

}

float sacarPromedio(int suma, int cantidad)
{
    float retorno;
    retorno= (float)suma / cantidad;

    return retorno;
}
