/*Programa para la entrega del laboratorio 5 de programación
 *Autor: Guillermo López de Arechavaleta
 *Fecha:18/03/2024
 *Versión:1.0
 *Descripción: Este programa pide 3 valores al usuario y muestra la ecuación de segundo grado correspondiente y sus soluciones.
 */

#include <stdio.h>
#include <math.h>
enum TIPO_ECU {NOECU, GRADO1, GRADO2DOB, G2REAL, G2IMG};

void pedir_Valores(double*,double*,double*);
enum TIPO_ECU calc_Soluciones(double,double,double,double*,double*);
void impr_Ecuación(double,double,double);
void impr_Solución(enum TIPO_ECU,double, double);


int main(){
	double a, b, c,sol_1, sol_2;
	enum TIPO_ECU tipo;
	pedir_Valores(&a,&b,&c);
	tipo=calc_Soluciones(a,b,c,&sol_1,&sol_2);
	impr_Ecuación(a,b,c);
	impr_Solución(tipo,sol_1,sol_2);

return 0;
}

void pedir_Valores(double *dir_a,double *dir_b,double *dir_c){
	printf("Dame el valor de a:\n");
	scanf("%lg",dir_a);
	printf("Dame el valor de b:\n");
	scanf("%lg",dir_b);
	printf("Dame el valor de c:\n");
	scanf("%lg",dir_c);
return;
}

enum TIPO_ECU calc_Soluciones(double a, double b, double c, double *dir_sol_1, double*dir_sol_2){
	enum TIPO_ECU tipo;
	if (a==0){ 
		if(b==0){
			tipo=NOECU;		
		}
		else{
			tipo=GRADO1;
			*dir_sol_1= -c/b;
		}
	}
	else {
		double rad;
		rad=pow(b,2)-4*a*c;
		if(rad<0){
			tipo= G2IMG;
			*dir_sol_1= -b/(2*a);
			*dir_sol_2= sqrt((-rad))/(2*a);
		}
		else if(rad>0){
			tipo =G2REAL;
			*dir_sol_1=-b+sqrt(pow(b,2)-4*a*c)/(2*a);
			*dir_sol_2=-b-sqrt(pow(b,2)-4*a*c)/(2*a);

		}
		else{
			tipo =GRADO2DOB;
			*dir_sol_1=-b/(2*a);
		}
	}
return tipo;
}

void impr_Ecuación(double a,double b,double c){
	printf("\n(%.0lf)x²+(%.0lf)x+(%.0lf)\n\n",a,b,c);
}

void impr_Solución(enum TIPO_ECU tipo,double sol_1,double sol_2){
	switch (tipo)
	{
	case NOECU:
		printf("No es una ecuación\n");
		break;	
	case GRADO1:
		printf("x=%g\n",sol_1);
		printf("\nEs una ecuación de primer grado con una solución\n");
		break;
	case GRADO2DOB:
		printf("x=%g\n", sol_1);
		printf("\nEs una ecuación de segundo grado con una solución doble\n");
		break;
	case G2IMG:
		printf("x_1=%g+%g*i\nx_2=%g-%g*i\n",sol_1,sol_2,sol_1,sol_2);
		printf("\nEs una ecuación de segundo grado con dos soluciones imaginarias\n");
		break;
	case G2REAL:
		printf("x_1=%g\nx_2=%g\n",sol_1,sol_2);
		printf("\nEs una ecuación de segundo grado con dos soluciones reales\n");
		break;
	}
return ;
}
