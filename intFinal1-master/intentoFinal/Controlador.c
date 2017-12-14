#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "entidad1.h"
#include "entidad2.h"
#include "Vista.h"
#include "DataManager.h"



static ArrayList* nominaEntidad1;
static int proximoIdEntidad1=0;
static int getNewIdEntidad1();
static int setNewIdEntidad1(int id);
//static int getNewIdEntidad2();
//static int setNewIdEntidad1(int id);
//static int setNewIdRelacion(int idRelacion);
//static int getNewIdRelacion();


static ArrayList* nominaEntidad2;
static int proximoIdEntidad2=0;
static int getNewIdEntidad2();
static int setNewIdEntidad2(int idEntidad2);

/*static ArrayList* nominaEntidad1;
static int proximoIdRelacion=0;
static int getNewIdRelacion();
static int setNewIdRelacion(int idRelacion);
*/
void cont_init()
{
    nominaEntidad1 = al_newArrayList();
    nominaEntidad2 = al_newArrayList();
  //  nominaInscriptos = al_newArrayList();

    setNewIdEntidad1(dm_readAllEntidad1(nominaEntidad1)+1);
    setNewIdEntidad2(dm_readAllEntidad2(nominaEntidad2)+1);
    //setNewId(/*dm_readAll(nominaSocios) + 1*/);

    vista_init(VISTA_IDIOMA_ES);
    vista_mostrarMenu();
}

int cont_altaEntidad1 (char* nombre,char* apellido,char* dni, int estado)
{
    Entidad1* auxEntidad1;
    auxEntidad1 = Entidad1_new(getNewIdEntidad1(), nombre,apellido, estado, dni);
    al_add(nominaEntidad1,auxEntidad1);
    dm_saveAllEntidad1(nominaEntidad1);
    return 0;
}

int cont_altaEntidad2 (int* idEntidad1, int* idEquipo, int* idOperador, int* tiempoEstimado, int* tiempoReal, int* estado)
{
    Entidad2* auxEntidad2;
    auxEntidad2 = Entidad2_new(getNewIdEntidad2(),idEntidad1,idEquipo,idOperador,tiempoEstimado,tiempoReal,estado);
    al_add(nominaEntidad2,auxEntidad2);
    dm_saveAllEntidad2(nominaEntidad2);
    return 0;
}

/*int cont_altaRelacion (int* idRelacion, int* idSocio, int* idServicio)
{
   /* int retorno=-1;

    RelacionSS* auxRelacion;
    if ( relSS_findByIdSocioServicio(auxRelacion,idSocio,idServicio) == NULL)
    {
    auxRelacion = relSS_new(idRelacion,idSocio,idServicio,RELACION_ESTADO_ACTIVO);
    al_add(nominaInscriptos,auxRelacion);
    dm_saveAllRelacion(nominaInscriptos);
    retorno=0;
    }
    else
    {
       retorno=-2;
    }
    return retorno;
}*/




int cont_bajaEntidad1 (int id)
{
    Entidad1* auxEntidad1;
    auxEntidad1=Entidad1_findById(nominaEntidad1,id);
    if(auxEntidad1!=NULL)
    {
        Entidad1_setEstado(auxEntidad1,ENTIDAD1_ESTADO_INACTIVO);
        dm_saveAllEntidad1(nominaEntidad1);
    }

    return 0;
}



int cont_bajaEntidad2(int id)
{
    Entidad2* auxEntidad2;
    auxEntidad2= Entidad2_findById(nominaEntidad2,id);
    if(auxEntidad2!=NULL)
    {
        Entidad2_setEstado(auxEntidad2,ENTIDAD2_ESTADO_INACTIVO);
        dm_saveAllEntidad2(nominaEntidad2);
    }

    return 0;
}




int cont_modificarEntidad1(char* nombre,char* apellido,char* dni, int id, int estado)
{
    Entidad1* auxEntidad1;

    auxEntidad1=soc_findById(nominaEntidad1,id);

    if(auxEntidad1!=NULL)
    {
        Entidad1_setNombre(auxEntidad1,nombre);
        Entidad1_setApellido(auxEntidad1,apellido);
        Entidad1_setDni(auxEntidad1,dni);
        Entidad1_setEstado(auxEntidad1,estado);
        dm_saveAllEntidad1(nominaEntidad1);
    }

    return 0;
}


int cont_modificarEntidad2(char* nombre,char* apellido,char* dni, int id, int estado)
{
    Entidad2* auxEntidad2;

    auxEntidad2=soc_findById(nominaEntidad2,id);

    if(auxEntidad2!=NULL)
    {
        Entidad2_setNombre(auxEntidad1,nombre);
        Entidad2_setApellido(auxEntidad1,apellido);
        Entidad2_setDni(auxEntidad1,dni);
        Entidad2_setEstado(auxEntidad1,estado);
        dm_saveAllEntidad2(nominaEntidad2);
    }

    return 0;
}


int cont_listarEntidad1 ()
{
    vista_mostrarEntidad1(nominaEntidad1);
    return 0;
}


int cont_listarEntidad2 ()
{
    vista_mostrarEntidad2(nominaEntidad2);
    return 0;
}

//SETTER-GETTER ID SOCIO
static int getNewIdEntidad1()
{
    return proximoIdEntidad1++;
}

static int setNewIdEntidad1(int id)
{
    proximoIdEntidad1 = id;
    return 0;
}

//SETTTER-GETTER ID SERVICIO
static int getNewIdEntidad2()
{
    return proximoIdEntidad2++;
}

static int setNewIdEntidad2(int id)
{
    proximoIdEntidad2 = id;
    return 0;
}


//SETTER-GETTER ID RELACION


/*static int getNewIdRelacion()
{
   // return proximoIdRelacion++;
}*/

/*static int setNewIdRelacion(int idRelacion)
{
    //proximoIdRelacion = idRelacion;
    return 0;
}*/


