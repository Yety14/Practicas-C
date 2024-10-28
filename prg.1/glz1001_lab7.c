/* Autor: Guillermo López de Arechavaleta Zapatero
 * Programa: Calculadora humana
 * Fecha: 15/04/2024
 * Resumen: ESte programa es el desafio de la calculadora humana, en el que el participante tendrá que, elejir su semilla de juego, para despúes realizar 7 sumas o restas con numeros aleatorios que irá acertando o fallando, si consigue acertar todas las sumas habrás ganado el desafio.
 */
 
//Librerias utilizadas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Funciones definidas
double rand0_1();
double rand0_max(int);
int rand_fin(int, int);
int operacion(int, int);

int main(){
	int num_1=0, num_2=0, respuesta=0, contador=0, resultado=0, semilla=0, t1=0, min=10, max=99, tiempo=0; //definicion de variables
	printf("Ingrese el valor de la semilla:"); 	//ajuste de la semilla
    scanf("%d", &semilla);
    srand(semilla); 
    num_1 = rand_fin(min,max); 					//primer numero aleatorio
    t1 = time(0); 								//empieza a contar el tiempo del programa
	while(contador<7){  						//Controlador para solo realizar 7 operaciones
	    num_2 = rand_fin(min,max);
		resultado=operacion(num_1,num_2);
		scanf("%d", &respuesta);
        if (respuesta == resultado) {  			//Comprobacion de si el resultado dado por el usuario es correcto el programa sigue.
			time_t t2 = time(0);
			tiempo = 50 - (t2 - t1);
			contador++;
			printf("Respuesta correcta.\nLevas acertadas %d\n\n", contador);
        	if (tiempo>0){  					//Comprobación de el tiempo restante
				printf("Tiempo restante: %d segundos.\n\n",tiempo);
	    		}
			else {
    				printf("¡Se acabó el tiempo!\n");
    				break;
	    		}
		}
	        else {  							//Si el numero no es correcto el programa salta aqui.
			time_t t2 = time(0);
			tiempo = 50- (t2 - t1);
        	        printf("Respuesta incorrecta. Inténtelo de nuevo.\n");
        	        if (tiempo>0){  			//Comprobación de el tiempo restante
				printf("Tiempo restante: %d segundos.\n\n",tiempo);
	    		}	
			else {
    				printf("¡Se acabó el tiempo!\n");
    				break;
	    		}
               	}
        num_1=resultado;
	}
	if (contador==7){
		printf("Ganaste");
	}
	else {
		printf("Lo siento, no lo has conseguido");
	}
return 0;
}

/*3 funciones para elegir numero aleatorio
*Entrada:Ninguna
*Salida:numero aleatorio
*/
double rand0_1(){
return rand()/(RAND_MAX+1.0);
}

double rand0_max(int max){
return rand0_1() * max ;
}

int rand_fin(int min, int max){
return min + (int)rand0_max(max-min +1);
}
/*Operación para elegir suma
*Entrada: Dos numeros enteros
*Salida: La suma o la resta de los dos numeros introducidos
*/
int operacion(int num_1, int num_2){
	int signo,resultado;
	signo = rand_fin(10,99) % 2;
        if (signo == 0 && num_1 < 80) {
        	resultado = num_1 + num_2;
                printf("\t¿Cuánto es %d + %d?\n", num_1, num_2);
        }
        else {
                resultado = num_1 - num_2;
                printf("\t¿Cuánto es %d - %d?\n", num_1, num_2);
        }
return resultado;
}
