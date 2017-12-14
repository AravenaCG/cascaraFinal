
#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Entidad1.h"
#include "Entidad2.h"
#include "DataManager.h"


int dm_saveAllEntidad1(ArrayList* pArrayEntidad1)
{
    int i;
    int retorno=-1;
    FILE* pArchivoEntidad1=fopen(ARCHIVO_ENTIDAD1,"wb");
    void* pEntidad1=NULL;
    if(pArrayEntidad1!=NULL)
    {
        for(i=0;i<al_len(pArrayEntidad1);i++)
        {
            pEntidad1=al_get(pArrayEntidad1,i);
            fwrite(pEntidad1,sizeof(Entidad1),1,pArchivoEntidad1);
            retorno=0;
        }

    }
    fclose(pArchivoEntidad1);
    return retorno;




    /*

 int i;
    int retorno=-1;
    FILE* pFile=fopen("out.csv","w");
    void* pEmployees=NULL;
    if(pFile!=NULL)
    {
		fprintf(pFile,"id,first_name,last_name,age,type\n");
        for(i=0;i<al_len(list);i++)
        {
            pEmployees=al_get(list,i);
            fprintf(pFile, "%d,%s,%s,%d,%d\n", employee_getId(pEmployees),employee_getName(pEmployees), employee_getLastName(pEmployees), employee_getAge(pEmployees), employee_getType(pEmployees));

            retorno=0;
        }

    }
    fclose(pFile);
    return retorno;


*/



}



int dm_readAllEntidad1(ArrayList* pArrayEntidad1)
{
    int retorno=-1;
    Entidad1* auxEntidad1;
    int maxId=0;
    Entidad1* pEntidad1=NULL;
    FILE* pArchivoEntidad1=fopen(ARCHIVO_ENTIDAD1,"rb");

    if(pArchivoEntidad1!=NULL)
    {
        do{
            if(fread(&auxEntidad1,sizeof(Entidad1),1,pArchivoEntidad1)==1)
            {
                pEntidad1=soc_new(auxEntidad1.nombre,auxEntidad1.apellido,auxEntidad1.dni,auxAlquiler.id,auxEntidad1.estado);
                al_add(pArrayEntidad1,pEntidad1);
                if(auxEntidad1.id>maxId)
                {
                    maxId=auxEntidad1.id;
                }
                retorno=maxId;
            }
        }while(!feof(pArchivoEntidad1));
        fclose(pArchivoEntidad1);
    }
    return retorno;


    /*
    FILE *pFile;
	Employee* auxEmployee;
	int retorno=-1;

    char var1[50],var2[50],var3[50],var4[50],var5[50];

    pFile = fopen("data.csv","r");

	if(pFile!=NULL)
    {
		fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5);
        do{
            if(fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",var1,var2,var3,var4,var5) >0)
			{
				if(val_validarInt(var1)!=-1 && val_validarDescripcion(var2)!=-1 && val_validarDescripcion(var3)!=-1 && val_validarInt(var4)!=-1 && val_validarInt(var5)!=-1)
				{
					auxEmployee=employee_new(atoi(var1), var2, var3,atoi(var4), atoi(var5));
					al_add(nominaEmployees, auxEmployee);
					retorno=0;
				}
			}
		}while(!feof(pFile));
        fclose(pFile);
	}
	return retorno;

*/





}





int dm_saveAllEntidad2(ArrayList* pArrayEntidad2)
{
    int i;
    int retorno=-1;
    FILE* pArchivoEntidad2=fopen(ARCHIVO_ENTIDAD2,"wb");
    void* pEntidad2=NULL;
    if(pArchivoEntidad2!=NULL)
    {
        for(i=0;i<al_len(pArrayEntidad2);i++)
        {
            pEntidad2=al_get(pArrayEntidad2,i);
            fwrite(pEntidad2,sizeof(Entidad2),1,pArchivoEntidad2);
            retorno=0;
        }

    }
    fclose(pArchivoEntidad2);
    return retorno;
}



int dm_readAllEntidad2(ArrayList* pArrayEntidad2)
{
    int retorno=-1;
    Entidad2* auxEntidad2;
    int maxId=0;
    Entidad2* pEntidad2=NULL;
    FILE* pArchivoEntidad2=fopen(ARCHIVO_ENTIDAD2,"rb");

    if(pArchivoEntidad2!=NULL)
    {
        do{
            if(fread(&auxEntidad2,sizeof(Entidad2),1,pArchivoEntidad2)==1)
            {
                pEntidad2=serv_new(auxEntidad2.descripcion,auxEntidad2.id,auxEntidad2.estado);
                al_add(pArrayEntidad2,pEntidad2);
                if(auxEntidad2.id>maxId)
                {
                    maxId=auxEntidad2.id;
                }
                retorno=maxId;
            }
        }while(!feof(pArchivoEntidad2));
        fclose(pArchivoEntidad2);
    }
    return retorno;
}

