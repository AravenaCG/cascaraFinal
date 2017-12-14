#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "Entidad1.h"

Entidad1* Entidad1_new(int id,char* nombre,char* apellido,int estado,char* dni)
{
        Entidad1* this = malloc(sizeof(Entidad1));

        if(this != NULL)
        {

                Entidad1_setId(this,id);
                Entidad1_setNombre(this,nombre);
                Entidad1_setApellido(this,apellido);
                Entidad1_setEstado(this,estado);
                Entidad1_setDni(this,dni);
        }
        return this;
}

void Entidad1_delete(Entidad1* this)
{
        free(this);
}

int Entidad1_setId(Entidad1* this,int id)
{
        this->id = id;
        return 0;
}

int Entidad1_setNombre(Entidad1* this,char* nombre)
{
        strcpy(this->nombre,nombre);
        return 0;
}

int Entidad1_setApellido(Entidad1* this,char* apellido)
{
        strcpy(this->apellido,apellido);
        return 0;
}

int Entidad1_setEstado(Entidad1* this,int estado)
{
        this->estado = estado;
        return 0;
}

int Entidad1_setDni(Entidad1* this,char* dni)
{
        strcpy(this->dni,dni);
        return 0;
}

int Entidad1_getId(Entidad1* this)
{
        return this->id;
}

char* Entidad1_getNombre(Entidad1* this)
{
        return this->nombre;
}

char* Entidad1_getApellido(Entidad1* this)
{
        return this->apellido;
}

int Entidad1_getEstado(Entidad1* this)
{
        return this->estado;
}

char* Entidad1_getDni(Entidad1* this)
{
        return this->dni;
}

Entidad1* Entidad1_findById(ArrayList* pArray,int id)
{

        int i;
        Entidad1* aux;
        Entidad1* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(id == Entidad1_getId(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad1* Entidad1_findByNombre(ArrayList* pArray,char* nombre)
{

        int i;
        Entidad1* aux;
        Entidad1* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(strcmp(nombre,Entidad1_getNombre(aux))==0)
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad1* Entidad1_findByApellido(ArrayList* pArray,char* apellido)
{

        int i;
        Entidad1* aux;
        Entidad1* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(strcmp(apellido,Entidad1_getApellido(aux))==0)
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad1* Entidad1_findByEstado(ArrayList* pArray,int estado)
{

        int i;
        Entidad1* aux;
        Entidad1* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(estado == Entidad1_getEstado(aux))
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}

Entidad1* Entidad1_findByDni(ArrayList* pArray,char* dni)
{

        int i;
        Entidad1* aux;
        Entidad1* retorno=NULL;
        for(i=0;i<al_len(pArray);i++)
        {
                aux = al_get(pArray,i);
                if(strcmp(dni,Entidad1_getDni(aux))==0)
                {
                        retorno = aux;
                        break;
                }
        }
        return retorno;
}



********************* eCliente.c ************************
