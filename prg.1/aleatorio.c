#include <stdio.h>
#include <stdlib.h>

double rand0_1();
double rand0_max(int);
int rand_min_max(int, int);

int main (){

	int min, max, semilla, contador=0,numero;

	printf("Introduce el valor de la semilla: ");
	scanf("%d", &semilla);
	srand(semilla);

	printf("Introduce el valor mínimo: ");
	scanf("%d", &min);

	do {
		printf("Introduce el valor máximo: ");
		scanf("%d", &max);
	}
	while (min > max);
	
	while(contador<10){

	numero = rand () % (max-min+1) + min;			//rand más facil
	
	printf("El valor aleatorio ente %d y %d es : %d\n %d \n", min , max,rand_min_max(min,max),numero);
	contador++;
	}
return 0;
}

double rand0_1(){
return rand()/(RAND_MAX+1.0);
}

double rand0_max(int max){
return rand0_1() * max ;
}

int rand_min_max(int min, int max){
return min + (int)rand0_max(max-min +1);
}
