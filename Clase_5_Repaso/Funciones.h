#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    char nombre[50];
    char apellido[50];
    int edad;
    int idLocalidad;
    int estado;
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
void mostrarLocalidad(eLocalidad localidad);
void inicializarListado(ePersona listado[], int tam);
int buscarLugar(ePersona listado[], int tam);
int cargarUnaPersona(ePersona listado[], int tam);
int buscarPersona(ePersona listado[], ePersona unaPersona, int tam);
int borrarPersona(ePersona listado[], ePersona unaPersona, int tam);
#endif // FUNCIONES_H_INCLUDED
