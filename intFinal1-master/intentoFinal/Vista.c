#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Validaciones.h"
#include "Socio.h"
#include "ArrayList.h"
#include "Vista.h"
#include "Controlador.h"
#include "servicios.h"



static int idiomaVista = VISTA_IDIOMA_ES;

static void opcionAltaEntidad1();
static void opcionBajaEntidad1();
static void opcionModificacionEntidad1();
static void opcionListadoEntidad1();

// Opciones Servicios

static void opcionAltaEntidad2();
static void opcionBajaEntidad2();
static void opcionModificacionEntidad2();
static void opcionListadoEntidad2();






int vista_init (int idioma)
{
    idiomaVista = idioma;
    return 0;
}

int vista_mostrarMenu()
{
    char buffer[10];
    int option=0;

    while(option != 9)
    {
        val_getInt(buffer, MENU_PPAL_ES, MENU_PPAL_ERROR_ES,2,5);
        option = atoi(buffer);

        switch(option)
        {
            case 1:
                opcionListado();
                break;
            case 2:
                opcionAlta();
                break;
            case 3:
                opcionBaja();
                break;
            case 4:
                opcionModificacion();
                break;
            case 5:
                opcionAltaServicio();
                break;
            case 6:
                opcionBajaServicio();
                break;
            case 7:
                opcionModificacionServicio();
                break;
            case 8:
                opcionListadoServicio();
                break;
        }
    }

    return 0;
}

void vista_mostrarEntidad1(ArrayList* pListaEntidad1)
{
    int i;
    Entidad1* auxEntidad1;
    for(i=0;i<al_len(pListaEntidad1);i++)
        {
            auxEntidad1=al_get(pListaEntidad1,i);
            if(auxEntidad1->estado==ENTIDAD1_ESTADO_ACTIVO)
            {
            auxEntidad1 = al_get(pListaEntidad1,i);
          //  printf("NOMBRE: %s - APELLIDO: %s- ID: %d - DNI: %s\n",soc_getNombre(auxEntidad1),
            //                soc_getApellido(auxEntidad1),soc_getId(auxEntidad1),soc_getDni(auxEntidad1));
            }
        }

}

void vista_mostrarEntidad2(ArrayList* pListaEntidad2)
{
    int i;
    Entidad2* auxEntidad2;
    for(i=0;i<al_len(pListaEntidad2);i++)
        {
            auxEntidad2=al_get(pListaEntidad2,i);
            if(auxEntidad2->estado==ENTIDAD2_ESTADO_ACTIVO)
            {
            auxEntidad2 = al_get(pListaEntidad2,i);
         //   printf("DESCRIPCION: %s -  ID: %d - \n",serv_getDescripcion(auxServicio),
           //                 serv_getId(auxServicio));
            }
        }

}








void mostrarError(char *);

static void opcionAltaEntidad1()
{
    char auxNombre[50];
    char auxApellido[50];
    char auxDni[50];
    val_getString(auxNombre, "Nombre? ", "Error",2,50);
    val_getString(auxApellido, "Apellido? ", "Error",2,50);
    val_getInt(auxDni, "DNI? ", "Error",2,50);
    cont_altaSocio(auxNombre,auxApellido,auxDni);

}

static void opcionAltaServicio()
{
    char auxDescripcion[50];
    val_getString(auxDescripcion, "Detalle del servicio? ", "Error",2,50);
    cont_altaEntidad2(auxDescripcion);

}


static void opcionBajaEntidad1()
{
    char auxId[10];
    int id;

    if((val_getUnsignedInt(auxId,"Id a dar de baja" , "Error",2,10)==0))
    {
        id = atoi(auxId);
        cont_bajaEntidad1(id);
    }

}



static void opcionBajaEntidad2()
{
    char auxId[10];
    int id;

    if((val_getUnsignedInt(auxId,"Id de Servicio a dar de baja" , "Error",2,10)==0))
    {
        id = atoi(auxId);
        cont_bajaEntidad2(id);
    }

}

static void opcionModificacionEntidad1()
{
    char auxId[10];
    int id;
    int estado;
    char auxNombre[50];
    char auxApellido[50];
    char auxDni[50];
    char auxEstado[5];

    if((val_getUnsignedInt(auxId,"Id a modificar" , "Error",2,10)==0))
    {
        id = atoi(auxId);
        if(val_getString(auxNombre, "Nombre? ", "Error",2,50)==0)
        {
            if(val_getString(auxApellido, "Apellido? ", "Error",2,50)==0)
            {
                if(val_getInt(auxDni, "DNI? ", "Error",2,50)==0)
                {
                    if(val_getUnsignedInt(auxEstado,"Estado?\nACTIVO= 0\nINACTIVO= 1", "Error",2,5)==0)
                    {
                        estado=atoi(auxEstado);
                        if(estado == 0 || estado == 1)
                        {
                            cont_modificarEntidad1(auxNombre,auxApellido,auxDni,id,estado);
                        }

                    }

                }
            }

        }

    }

}
static void opcionModificacionEntidad2()
{
    char auxId[10];
    int id;
    int estado;
    char auxDescripcion[50];
    char auxEstado[5];

    if((val_getUnsignedInt(auxId,"Id de Servicio a modificar", "Error",2,10)==0))
    {
        id = atoi(auxId);
        if(val_getString(auxDescripcion, "Detalle del servicio? ", "Error",2,50)==0)
        {
            if(val_getUnsignedInt(auxEstado,"Estado?\nACTIVO= 0\nINACTIVO= 1", "Error",2,5)==0)
            {
                estado=atoi(auxEstado);
                if(estado == 0 || estado == 1)
                {
                 //   cont_modificarEntidad2(auxDescripcion,id,estado);
                }

            }

        }
    }

}





static void opcionListadoEntidad1()
{
    cont_listarEntidad1();
}

static void opcionListadoEntidad2()
{
    cont_listarEntidad2();
}
