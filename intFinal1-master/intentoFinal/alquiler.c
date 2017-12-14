#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Entidad2.h"

Entidad2* Entidad2_new(int idEntidad2, int idCliente,int idEquipo,int idOperador,int tiempoEstimado,int tiempoReal,int estado)
{
        Entidad2* this = malloc(sizeof(Entidad2));

        if(this != NULL)
        {

                Entidad2_setIdCliente(this,idCliente);
                Entidad2_setIdEquipo(this,idEquipo);
                Entidad2_setIdOperador(this,idOperador);
                Entidad2_setTiempoEstimado(this,tiempoEstimado);
                Entidad2_setTiempoReal(this,tiempoReal);
                Entidad2_setEstado(this,estado);
        }
        return this;
}

void Entidad2_delete(Entidad2* this)
{
        free(this);
}

int Entidad2_setIdCliente(Entidad2* this,int idCliente)
{
        this->idCliente = idCliente;
        return 0;
}

int Entidad2_setIdEquipo(Entidad2* this,int idEquipo)
{
        this->idEquipo = idEquipo;
        return 0;
}

int Entidad2_setIdOperador(Entidad2* this,int idOperador)
{
        this->idOperador = idOperador;
        return 0;
}

int Entidad2_setTiempoEstimado(Entidad2* this,int tiempoEstimado)
{
        this->tiempoEstimado = tiempoEstimado;
        return 0;
}

int Entidad2_setTiempoReal(Entidad2* this,int tiempoReal)
{
        this->tiempoReal = tiempoReal;
        return 0;
}

int Entidad2_setIdEntidad2(Entidad2* this,int idEntidad2)
{
        this->idEntidad2 = idEntidad2;
        return 0;
}


int Entidad2_setEstado(Entidad2* this,int estado)
{
        this->estado = estado;
        return 0;
}

int Entidad2_getIdCliente(Entidad2* this)
{
        return this->idCliente;
}

int Entidad2_getIdEquipo(Entidad2* this)
{
        return this->idEquipo;
}

int Entidad2_getIdOperador(Entidad2* this)
{
        return this->idOperador;
}

int Entidad2_getTiempoEstimado(Entidad2* this)
{
        return this->tiempoEstimado;
}

int Entidad2_getTiempoReal(Entidad2* this)
{
        return this->tiempoReal;
}

int Entidad2_getIdEntidad2(Entidad2* this)
{
        return this->idEntidad2;
}

int Entidad2_getEstado(Entidad2* this)
{
        return this->estado;
}

Entidad2* Entidad2_findByIdCliente(ArrayList* pArray,int idCliente)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(idCliente == Entidad2_getIdCliente(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad2* Entidad2_findByIdEquipo(ArrayList* pArray,int idEquipo)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(idEquipo == Entidad2_getIdEquipo(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad2* Entidad2_findByIdOperador(ArrayList* pArray,int idOperador)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(idOperador == Entidad2_getIdOperador(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad2* Entidad2_findByTiempoEstimado(ArrayList* pArray,int tiempoEstimado)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(tiempoEstimado == Entidad2_getTiempoEstimado(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad2* Entidad2_findByTiempoReal(ArrayList* pArray,int tiempoReal)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(tiempoReal == Entidad2_getTiempoReal(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad2* Entidad2_findByEstado(ArrayList* pArray,int estado)
{

        int i;
        Entidad2* aux;
        Entidad2* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(estado == Entidad2_getEstado(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}



