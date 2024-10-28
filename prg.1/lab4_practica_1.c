#include <stdio.h>
#include <math.h>
float perimetro (float, float);
float area (float, float);

int main(){
	
	float diag_1,diag_2,a,p;
	printf("Dame un valor para la diagonal larga");
	scanf("%f", &diag_1);
	printf("Dame un valor para la diagonal corta");
	scanf("%f",&diag_2);
	p=perimetro(diag_1,diag_2);
	a=area(diag_1,diag_2);
	printf("El area es:%f y el preimetro es %f\n",a,p);
	
	return 0;
}

//Funciones primer ejercicio

float perimetro(float a, float b){
	float p;
	p=2*sqrt(a*a+b*b);

return p;
}

float area(float a, float b){
	float area;
	area=1/2*a*b;

return area;
}

