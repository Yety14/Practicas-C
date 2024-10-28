/* Autor: Guillermo López de Arechavaleta Zapatero
 * Programa: Suma y multiplicación de matrices
 * Fecha: 08/05/2024
 * Resumen: Este programa se encargarga de sumar dos matrices, una de ellas es introducida manualmente por el usuario y la otra se encuentra en un archivo .csv. Los resultados de la suma y el producto se guardan en dos archivos .csv con sus respectivos nombres.
 */
 
//Librerias utilizadas
#include<stdio.h>
//Definición de una constante
#define TAM 4

//Funciones definidas
void LeerGuardar(int [TAM][TAM],FILE *,FILE *);
void Mostrar(FILE *);

int main(){
	int list[TAM][TAM], opcion;										//declarar las variables
	FILE * arch_1, * arch_2, * arch_3, * arch_4;					//declarar las variables archivo
	do{
		printf("\t--------------------- MENU ---------------------\n");
		printf("\t1.-Leer suma.csv y guardarlo en suma.dat\n");
		printf("\t2.-Leer producto.csv y guardarlo en producto.dat\n");
		printf("\t3.-Mostrar suma.dat\n");
		printf("\t4.-Mostrar producto.dat\n");
		printf("\t5.-Salir\n");
		printf("\t------------------------------------------------\n\n");
		printf("Elije una opción:");
		scanf("%d",&opcion);
		switch ( opcion ){
		
    			case 1:	
    				arch_1 = fopen("Suma.csv","r");
					if (arch_1==NULL) {
						printf("No se pudo abrir el archivo suma.csv\n");
					}
					else {
						arch_2 = fopen("Suma.dat","wb");
						if (arch_2==NULL) {
							printf("No se pudo abrir el archivo suma.dat\n");
						}
						else {
							LeerGuardar(list,arch_1,arch_2);
							fclose(arch_1);
							fclose(arch_2);
						}
					}	
		        	break;
		        	
	   			case 2:
    				arch_3 = fopen("Producto.csv","r");
					if (arch_3==NULL) {
						printf("No se pudo abrir el archivo producto.csv\n");
					}
					else {
						arch_4 = fopen("Producto.dat","wb");
						if (arch_4==NULL) {
							printf("No se pudo abrir el archivo producto.dat\n");
						}
						else {
							LeerGuardar(list,arch_3,arch_4);
							fclose(arch_3);
							fclose(arch_4);
						}
					}
		        	break;
		        	
	   			case 3:
					arch_2 = fopen("Producto.dat","rb");
						if (arch_2==NULL) {
							printf("No se pudo abrir el archivo suma.dat\n");
						}
						else {
							Mostrar(arch_2);
							fclose(arch_2);
						}
		        	break;	
		        		        	
	   			case 4:
	   				arch_4 = fopen("Producto.dat","rb");
						if (arch_4==NULL) {
							printf("No se pudo abrir el archivo producto.dat\n");
						}
						else {
							Mostrar(arch_4);
							fclose(arch_4);
						}   					
		        	break;
		        	
	   			case 5:
		        	break;       			        			        	
		}
	}
	while(opcion!=5);
return 0;
}

/*Operación para sumar y representar los resultados en el archivo .csv correspondiente
*Entrada: Dos numeros enteros
*Salida: Ninguna
*/
void LeerGuardar(int l[TAM][TAM],FILE *f_1,FILE *f_2){	
	for (int i=0; i<TAM; i++){
		for (int j=0; j<TAM; j++){	
		fscanf(f_1,"%d;",&l[i][j]);
		}
	}
	fwrite(l,sizeof(int),TAM*TAM,f_2);

}

/*Operación para sumar y representar los resultados en el archivo .csv correspondiente
*Entrada: Dos numeros enteros
*Salida: Ninguna
*/
void Mostrar(FILE *f){
	int l[TAM][TAM];
	fread(l,sizeof(int),TAM*TAM,f);
	for (int i=0; i<TAM; i++){
		for (int j=0; j<TAM; j++){	
		printf("%d;",l[i][j]);
		}
	printf("\n");
	}
}
