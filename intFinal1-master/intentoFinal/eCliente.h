#include "ArrayList.h"

#ifndef ECLIENTE_H_INCLUDED
#define ECLIENTE_H_INCLUDED

typedef struct
{
        int id;
        char nombre[51];
        char apellido[51];
        int estado;
        char dni[51];
}Entidad1;
#endif// _Entidad1
#define CLIENTE_ESTADO_INACTIVO 0
#define CLIENTE_ESTADO_ACTIVO 1
#define ARCHIVO_CLIENTES "cliente.txt"
Entidad1* Entidad1_new(int id,char* nombre,char* apellido,int estado,char* dni);

void Entidad1_delete(Entidad1* this);
int Entidad1_setId(Entidad1* this,int id);
int Entidad1_setNombre(Entidad1* this,char* nombre);
int Entidad1_setApellido(Entidad1* this,char* apellido);
int Entidad1_setEstado(Entidad1* this,int estado);
int Entidad1_setDni(Entidad1* this,char* dni);
int Entidad1_getId(Entidad1* this);
char* Entidad1_getNombre(Entidad1* this);
char* Entidad1_getApellido(Entidad1* this);
int Entidad1_getEstado(Entidad1* this);
char* Entidad1_getDni(Entidad1* this);
Entidad1* Entidad1_findById(ArrayList* pArray,int id);
Entidad1* Entidad1_findByNombre(ArrayList* pArray,char* nombre);
Entidad1* Entidad1_findByApellido(ArrayList* pArray,char* apellido);
Entidad1* Entidad1_findByEstado(ArrayList* pArray,int estado);
Entidad1* Entidad1_findByDni(ArrayList* pArray,char* dni);


