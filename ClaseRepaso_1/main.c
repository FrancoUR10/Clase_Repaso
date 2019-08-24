#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mayorImporteDolares;
    int elPrimerDolar=1;
    int acumuladorPositivos=0;
    int contadorPositivos=0;
    int dinero;
    int primerDineroPositivo=1;
    float promedioPositivos;
    char tipo; //b,l,d,p

    int i;
    for(i=0;i<10;i++)
    {
        printf("Ingrese la cantidad de dinero: ");
        scanf("%d",&dinero);
        fflush(stdin);
        printf("Ingrese el tipo: ");
        scanf("%c",&tipo);
        fflush(stdin);

        if(tipo=='d')
        {
            if(elPrimerDolar==1)
            {
                mayorImporteDolares=dinero;
                elPrimerDolar=0;
            }
            if(dinero > mayorImporteDolares)
            {
                mayorImporteDolares=dinero;
            }
        }

        if(dinero > 0)
        {
            if(primerDineroPositivo==1)
            {
                primerDineroPositivo=0;
            }
            acumuladorPositivos+=dinero;
            contadorPositivos++;
        }
    }
    if(elPrimerDolar==1)
    {
        printf("\nNo ingreso dolares\n");
    }
    else
    {
        printf("\nImporte mayor en dolares: %d\n",mayorImporteDolares);
    }

    if(primerDineroPositivo==1)
    {
        printf("\nNo ingreso dinero positivo\n");
    }
    else
    {
        promedioPositivos=(float)acumuladorPositivos/contadorPositivos;
        printf("\nPromedio de dinero positivo: %.2f\n",promedioPositivos);
    }





    return 0;
}
