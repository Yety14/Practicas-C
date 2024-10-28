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
void leer_datos(int [TAM][TAM],int [TAM][TAM],FILE *);
void escribir_suma(int [TAM][TAM],int [TAM][TAM]);
void escribir_producto(int [TAM][TAM],int[TAM][TAM]);

int main(){
	int list_1[TAM][TAM],list_2[TAM][TAM];		//declarar las variables
	FILE* arch;									//declarar la variable archivo
	arch=fopen("Matriz.csv","r");				//apertura del archivo donde esta la segunda matriz
	if (arch==NULL) {							//comprobación de correcta apertura
		printf("No se pudo abrir el archivo\n");
	}
	else {
		printf("Este programa está hecho por Guillermo López de Arechavaleta Zapatero y se encarga de realizar una serie de calculos con matrices, una de ellas pedida al usuario, para plasmarlos en sus correspondientes archivos .csv.\n\n");
		leer_datos(list_1,list_2,arch);			//operaciones del programa
		escribir_suma(list_1,list_2);
		escribir_producto(list_1,list_2);
		}	
	fclose(arch);								//cerrar el archivo
	
return 0;
}

/*Función para introducir datos en ambas matrices
*Entrada: Ambas matrices y el archivo donde se encuentra la segunda
*Salida: Ninguna
*/
void leer_datos(int l_1[TAM][TAM],int l_2[TAM][TAM],FILE* archivo){
	for (int i=0; i<TAM; i++){
		for (int j=0; j<TAM; j++){
			printf("Introduce el valor %d%d de la matriz.\n",i+1,j+1);
			scanf("%d",&l_1[i][j]);
			fscanf(archivo,"%d;",&l_2[i][j]);
		}
	}	
return;
}

/*Operación para sumar y representar los resultados en el archivo .csv correspondiente
*Entrada: Dos numeros enteros
*Salida: Ninguna
*/
void escribir_suma(int l_1[TAM][TAM],int l_2[TAM][TAM]){
	FILE* sol;
	sol=fopen("Suma.csv","w");
	if (sol==NULL) {							//comprobación de correcta apertura
		printf("No se pudo abrir el archivo\n");
	}
	else {
		for (int i=0; i<TAM; i++){
			for (int j=0; j<TAM; j++){
				fprintf(sol,"%d;",l_1[i][j]+l_2[i][j]);
			}
			fprintf(sol,"\n");
		}
	}
	return;
}

/*Operación para multiplicar y representar los resultados en el archivo .csv correspondiente
*Entrada: Dos numeros enteros
*Salida: Ninguna
*/
void escribir_producto(int l_1[TAM][TAM],int l_2[TAM][TAM]){
	FILE* sol;
	sol=fopen("Producto.csv","w");
	if (sol==NULL) {							//comprobación de correcta apertura
		printf("No se pudo abrir el archivo\n");
	}
	else {
		for (int i=0; i<TAM; i++){
			for (int j=0; j<TAM; j++){
				fprintf(sol,"%d;",l_1[i][j]*l_2[i][j]);
			}
			fprintf(sol,"\n");
		}
	}
	return;
}
