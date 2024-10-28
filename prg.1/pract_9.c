#include<stdio.h>
#define TAM 5

void leer_datos(int [TAM]);
void calc(int [TAM],int [TAM]);
void escribir_datos(int [TAM]);

int main(){

	int list_1[TAM],list_2[TAM];
	leer_datos(list_1);
	printf("\n");
	leer_datos(list_2);
	printf("\n");
	calc(list_1,list_2);
	escribir_datos(list_1);
	printf("\n");
	escribir_datos(list_2);
	
return 0;
}



void leer_datos(int l[TAM]){
	for (int i=0; i<TAM; i++){
		printf("Introduce el valor %d de la cadena entre 0 y 9.\n",i);
		scanf("%d",&l[i]);
	}	
return;
}

void calc(int l_1[TAM],int l_2[TAM]){
	for (int i=0; i<TAM; i++){
		printf("La suma de la posición %d en ambas listas es %d\n\n",i,l_1[i]+l_2[i]);
	}
return;
}

void escribir_datos(int l[TAM]){
	for (int i=0; i<TAM; i++){
		printf("El valor introducido en la posición %d es %d\n",i,l[i]);
	}
return;
}
