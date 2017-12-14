

void cont_init();

int cont_altaEntidad1 (char* nombre,char* apellido,char* dni, int estado);

int cont_altaEntidad2 (int* idEntidad1, int* idEquipo, int* idOperador, int* tiempoEstimado, int* tiempoReal, int* estado);

int cont_bajaEntidad1 (int id);

int cont_bajaEntidad2(int id);


int cont_modificarEntidad1(char* nombre,char* apellido,char* dni, int id, int estado);

int cont_listarEntidad1 ();

int cont_listarEntidad2 ();

int cont_modifiarEntidad2 (char* nombre,char* apellido,char* dni, int id, int estado);

/*int cont_altaServicio (char* descripcion);

int cont_bajaServicio(int id);

int cont_modificarServicio (char* descripcion, int id, int estado);

int cont_listarServicios ();*/
