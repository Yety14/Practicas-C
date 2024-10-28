/* Programa que calcula el factorial, o los divisores de un número o comprueba si es un número perfecto*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void factorial(int n);
void divisores(int n);
void perfecto(int n);

int main(){
    int num, opción = 1;
    
    printf("Este programa calcula el factorial, los divisores o comprueba si ");
    printf("el número introducido es perfecto.\n");
    printf("Dame un número:");
    scanf("%d", &num);
    
    do{
    	printf("\n\t0.Salir\n\t1.Factorial \n\t2.Divisores \n\t3.Comprobar si el número es perfecto.\n\n¿Qué operación quieres realizar?:\n");
	    scanf("%d", &opción);
	    
   		switch(opción){
    	   	case 1:
    	   	    factorial(num);
    	   	    break;
    	   	case 2:
    	   	    divisores(num);
    	   	    break;
    	   	case 3:
    	   	    perfecto(num);
    	   	    break;
    	   	default:
    	   		if (opción!=0){
   			    	printf("Error\n\n");
   			    }
   		}
    }
    while (opción !=0);
return 0;
}

void factorial(int n){
    int total=1;
    for(int i=1;i<=n;i++){
        total *= i;
    }
    printf("El factorial de %d es %d\n\n\n", n, total);
}

void divisores(int n){
    int list[n];
    int a=0;
    for(int j=1;j<=n;j++){
        if (n%j == 0){      
           	list[a] = j;
           	a++;
        }
    }
    printf("\nLos divisores de %d son:\n", n);
    for(int i=0;i<a;i++){
    	if(i == (a-1)){
    		printf("%d", list[i]);
    	}else{
    		printf("%d,", list[i]);
    	}
    	
    }
    printf("\n\n\n");
}


void perfecto(int n){
    int suma = 0;
    for(int j=1;j<n;j++){
        if (n%j == 0){
            suma +=j;
        }
    }
    if (suma == n){
        printf("El número introducido es perfecto.\n\n");
    }
    else printf("El número introducido no es perfecto.\n\n");
}
