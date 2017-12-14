#ifndef VISTA_H_INCLUDED
#define VISTA_H_INCLUDED

#endif // VISTA_H_INCLUDED

#define VISTA_IDIOMA_ES 0
#define VISTA_IDIOMA_EN 1

#define MENU_PPAL_ES "\n1. ALTA CLIENTE\n2. MODIFICAR CLIENTE\n3. BAJA CLIENTE\n4. NUEVO ALQUILER\n5. FIN ALQUILER\n6.INFORMAR \n\n\n\n9.Salir\n\n"
#define MENU_PPAL_EN "\n1. List Employees\n2. Add an item\n3. Edit an item\n4. Delete an item \n5. Exit \n"
#define MENU_PPAL_ERROR_ES "\nOPCION INVALIDA\n"
#define MENU_PPAL_ERROR_EN "\nINVALID OPTION\n"



int vista_init (int idioma);

int vista_mostrarMenu();

void vista_mostrarEntidad1(ArrayList* pListaSocios);

void vista_mostrarEntidad2(ArrayList* pListaServicios);

void vista_mostrarError(char *);





