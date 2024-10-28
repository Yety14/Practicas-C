/* Autor: Guillermo López de Arechavaleta Zapatero
 * Programa: Calculos de x
 * Fecha: 29/04/2024
 * Resumen: ESte programa se encarga de realizar una serie de calculos con los datos pasados por el usuario y los plasma en un archivo 
 */

 //Librerias utilizadas
#include<stdio.h>
#include<math.h>

//Funciones definidas
void calc( float*, float, float, FILE*);

int main(){
	float min, max, inc;			//declarar las variables
	FILE* var_arch;				//declarar la variable archivo
	printf("Este trabajo está hecho por Guillermo López de Arechavaleta Zapatero y se encarga de realizar una serie de calculos para plasmarlos en un archivo.\n\n");
	printf("Dame el dato minimo.\n");
	scanf("%g", &min); 			//pedir datos al usuario
	printf("Dame el dato maximo.\n");
	scanf("%g",&max);
	printf("Dame el incremento.\n");
	scanf("%g", &inc);
	var_arch=fopen("Datos.csv","w"); 	//abrir el archivo Datos.csv
	calc(&min, max, inc, var_arch);		//ir a función de calculo

return 0;
}

/*Calculos
*Entrada: Tres numeros enteros
*Salida: Ninguna
*/
void calc(float *min,float max,float inc, FILE* var_arch){
	
	if (var_arch==NULL) {			//comprobación de correcta apertura
		fprintf(var_arch,"No se pudo abrir el archivo\n");
	}
	else {
		fprintf(var_arch,"X;X²;X³;raiz(X);ln(X);X*ln(X)\n");
		do{				//calculos en bucle
		float mi,min2,min3,min0,minlog,minm;
	       	mi=*min;			
		min2=pow(mi,2);
		min3=pow(mi,3);
		min0=sqrt(mi);
		minlog=log(mi);
		minm=mi*minlog;
		fprintf(var_arch,"%g;%g;%g;%g;%g;%g\n",mi,min2,min3,min0,minlog,minm);
		*min=*min+inc;
		}
		while(*min<=max);		
	}	
	fclose(var_arch);			//cerrar el archivo
return;
}
