#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int edad;
    int idLocalidad;
} ePersona;

typedef struct
{
    int id;
    char descripcion[50];
} eLocalidad;

eLocalidad construirLocalidad(void);
ePersona construirPersona(int idLocalidad);
void mostrarPersona(ePersona unaPersona[], int tam);
void mostrarListadoLocalidades(eLocalidad listado[], int cantidadRegistros);
int cargarLocalidades(eLocalidad listado[],int tam);
//int cargarPersonas(ePersona listado[],int tam);
void mostrarLocalidad(eLocalidad localidad);

#endif // FUNCIONES_H_INCLUDED
