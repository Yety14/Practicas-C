#include <stdio.h>

enum dia {Lunes=1,Martes,Miercoles,Jueves,Viernes,Sabado,Domingo};
enum dia dia_sig(enum dia);

int main(){
  	enum dia mañana,hoy;

  	hoy=Martes;
	mañana=dia_sig(hoy);
	printf("Hoy es: %d y mañana es: %d\n",hoy,mañana);


	return 0;
}
enum dia dia_sig(enum dia hoy){
 return hoy+1;
}
