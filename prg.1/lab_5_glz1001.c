/*Programa para la entrega del laboratorio 5 de programación
 *Autor: Guillermo López de Arechavaleta
 *Fecha:18/03/2024
 *Versión:1.0
 *Descripción: Este programa pide 3 valores al usuario y muestra la ecuación de segundo grado correspondiente y sus soluciones.
 */

#include <stdio.h>
#include <math.h>

void pedir_Valores(float*,float*,float*);
float calc_Soluciones(float,float,float);
void impr_Ecuación(float*,float*,float*);
void impr_Solución(float*,float*,float*,float *);


int main(){
	float a, b, c,sol;
	pedir_Valores(&a,&b,&c);
	sol=calc_Soluciones(a,b,c);
	impr_Ecuación(&a,&b,&c);
	impr_Solución(&a,&b,&c,&sol);

return 0;
}

void pedir_Valores(float *a,float *b,float *c){
	printf("Dame el valor de a:\n");
	scanf("%f",a);
	printf("Dame el valor de b:\n");
	scanf("%f",b);
	printf("Dame el valor de c:\n");
	scanf("%f",c);
return;
}

float calc_Soluciones(float a, float b, float c){
	float sol_1_1=0, sol_1_2=0, sol_2_1, sol_2_2;
	if (a==0 && b==0){                      //no ecuación 

	}
	else if(a==0){				//ecuación de primer grado
		sol_1_1= -c/b;

	}
	else if(a!=0){				//ecuación de segundo grado 
		if ((4.0*a*c)<0){			//real	

		sol_1_1=(-b+sqrt(pow(b,2)-(4.0*a*c)))/(2*a);
		sol_2_1=(-b-sqrt(pow(b,2)-(4.0*a*c)))/(2*a);
		}

		else if ((4.0*a*c)>0){			//imaginaria

		sol_1_1=(-b+sqrt(pow(b,2)));
		sol_1_2=(4.0*a*c)/(2*a);
		sol_2_1=(-b+sqrt(pow(b,2)));
		sol_2_2=(4.0*a*c)/(2*a);
		printf("%.0f+%.0f*i",sol_1_1,sol_1_2);
		printf("%.0f+%.0f*i",sol_2_1,sol_2_2);
		
		}
	}
return sol_1_1;
}

void impr_Ecuación(float *a,float *b,float *c){
	printf("\n(%.0f)x²+(%.0f)x+(%.0f)\n",*a,*b,*c);
}

void impr_Solución(float *a,float *b,float *c,float *sol){
	if (*a==0 && *b==0){
		printf("No es una ecuación\n");
	}
	else if(*a==0){
		//sol_1= -c/b;
		printf("x=%f\n",*sol);
	}
	else if(*a!=0){
		//sol_1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
		//sol_2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
		printf("x_1=%f\nx_2=%f\n",*sol,*sol);
	}
return ;

}
