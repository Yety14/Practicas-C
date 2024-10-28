#include <stdio.h>
#include <string.h>
#define MAXNOM 20
#define MAXAPEL 30
#define MAXDNI 10

struct Ficha{
	char nombre[MAXNOM];
	char apellido[MAXAPEL];
	char dni[MAXDNI];
	int dia;
	int mes;
	int año;
};

int main(){
	struct Ficha pers1;
    strcpy(pers1.nombre, "Guillermo");
    strcpy(pers1.apellido, "López de A.");
    strcpy(pers1.dni, "71483610R");
	pers1.dia = 30;
	pers1.mes = 07;
	pers1.año = 2005;
	
    struct Ficha pers2 = {"Guillermo", "López de A.", "71483610R", 30, 7, 2005};
	
	printf("%s %s, con DNI %s nació el %d/%d/%d\n",pers1.nombre, pers1.apellido, pers1.dni, pers1.dia, pers1.mes, pers1.año);
	
	printf("%s %s, con DNI %s nació el %d/%d/%d\n",pers2.nombre, pers2.apellido, pers2.dni, pers2.dia, pers2.mes, pers2.año);
	
return 0;
}
