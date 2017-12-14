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
}eCliente;
#endif// _ECLIENTE
eCliente* eCliente_new(int id,char* nombre,char* apellido,int estado,char* dni);

void eCliente_delete(eCliente* this);
int eCliente_setId(eCliente* this,int id);
int eCliente_setNombre(eCliente* this,char* nombre);
int eCliente_setApellido(eCliente* this,char* apellido);
int eCliente_setEstado(eCliente* this,int estado);
int eCliente_setDni(eCliente* this,char* dni);
int eCliente_getId(eCliente* this);
char* eCliente_getNombre(eCliente* this);
char* eCliente_getApellido(eCliente* this);
int eCliente_getEstado(eCliente* this);
char* eCliente_getDni(eCliente* this);
eCliente* eCliente_findById(ArrayList* pArray,int id);
eCliente* eCliente_findByNombre(ArrayList* pArray,char* nombre);
eCliente* eCliente_findByApellido(ArrayList* pArray,char* apellido);
eCliente* eCliente_findByEstado(ArrayList* pArray,int estado);
eCliente* eCliente_findByDni(ArrayList* pArray,char* dni);


