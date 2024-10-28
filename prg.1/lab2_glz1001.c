//Programa cambio de unidades, concretamente de horas, minutos y segundo a unicamente segundos.
//Guillermo López de Arechavaleta
//26/02/2024

//librerias utilizadas
#include <stdio.h>
//función principal
int main(){
	//Declaración de variables
	int min, seg, final, horas, dias, semanas;
	//Presentación
	printf("Este programa está hecho por Guillermo López de Arechavaleta Zapatero, tiene como fin que el ususuario introduzca un número de semanas, dias, horas, minutos y segundo y el programa convierta dicha cantidad a segundos\n\n");
	//Entrada de datos
	printf("Deme las semanas, dias, horas minutos y segundos que quiera convertir separados por un espacio\n");
	scanf("%d %d %d %d %d",&semanas, &dias, &horas, &min, &seg);
	//Calculos
	final=semanas*604800+dias*86400+horas*3600+min*60+seg;
	//Salida de datos
	printf("%2d semana(s),%2d dias(s),%2d hora(s),%2d minuto(s) y %2d segundo(s)\n", semanas , dias , horas , min ,seg);
	printf("El numero total de segundos es:%d\n", final);

return 0;
}
