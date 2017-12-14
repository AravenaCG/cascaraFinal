#include "ArrayList.h"

#ifndef _ALQUILER_H_INCLUDED
#define _ALQUILER_H_INCLUDED
typedef struct
{
        int idCliente;
        int idEquipo;
        int idOperador;
        int tiempoEstimado;
        int tiempoReal;
        int estado;
        int idEntidad2;
}Entidad2;
#endif// _Entidad2_H_INCLUDED
#define Entidad2_ESTADO_INACTIVO 0
#define Entidad2_ESTADO_ACTIVO 1
#define ARCHIVO_Entidad2ES "Entidad2es.txt"



Entidad2* Entidad2_new(int idEntidad2, int idCliente,int idEquipo,int idOperador,int tiempoEstimado,int tiempoReal,int estado);
void Entidad2_delete(Entidad2* this);
int Entidad2_getIdEntidad2(Entidad2* this);
int Entidad2_setIdEntidad2(Entidad2* this, int idEntidad2);
int Entidad2_setIdCliente(Entidad2* this,int idCliente);
int Entidad2_setIdEquipo(Entidad2* this,int idEquipo);
int Entidad2_setIdOperador(Entidad2* this,int idOperador);
int Entidad2_setTiempoEstimado(Entidad2* this,int tiempoEstimado);
int Entidad2_setTiempoReal(Entidad2* this,int tiempoReal);
int Entidad2_setEstado(Entidad2* this,int estado);
int Entidad2_getIdCliente(Entidad2* this);
int Entidad2_getIdEquipo(Entidad2* this);
int Entidad2_getIdOperador(Entidad2* this);
int Entidad2_getTiempoEstimado(Entidad2* this);
int Entidad2_getTiempoReal(Entidad2* this);
int Entidad2_getEstado(Entidad2* this);
Entidad2* Entidad2_findByIdCliente(ArrayList* pArray,int idCliente);
Entidad2* Entidad2_findByIdEquipo(ArrayList* pArray,int idEquipo);
Entidad2* Entidad2_findByIdOperador(ArrayList* pArray,int idOperador);
Entidad2* Entidad2_findByTiempoEstimado(ArrayList* pArray,int tiempoEstimado);
Entidad2* Entidad2_findByTiempoReal(ArrayList* pArray,int tiempoReal);
Entidad2* Entidad2_findByEstado(ArrayList* pArray,int estado);



