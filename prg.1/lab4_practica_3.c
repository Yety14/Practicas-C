#include <stdio.h>
#include <math.h>


int pide_l();
void pide_r(float *);
float lado(int, float);
float perimetro (int, float );
float apotema(float, float);
float area (float, float);


int main(){

 	int num_lad;
  	float rad, per, lad, ar, apo;
  	num_lad = pide_l();
  	pide_r(&rad);
  	lad=lado(num_lad,rad);
  	per=perimetro(num_lad,lad);
	apo=apotema(rad,lad);  	
  	ar=area(per,apo);
	printf("el radio es: %f y el num de lados es %d\n",rad,num_lad);
	printf("la apotema es: %f y el lado es %f\n",apo,lad);
  	printf("el perimetro es: %f y el area es %f\n",per,ar);
return 0;
}


int pide_l(){

	printf("Dame el numero de lados\n");
	int num_lad_usuario;
	scanf("%d",&num_lad_usuario);
return num_lad_usuario;
}


void pide_r(float *rad){
	printf("Dame el radio:\n");
	scanf("%f",rad);

return;
}


float perimetro (int n_lado, float radio){

	float perim;
	perim=n_lado*radio;

return perim;
}


float lado(int n_lado, float radio){

	float lado;
	lado=sqrt(2*pow(radio,2)*(1-cos(360/n_lado)));

return lado;
}


float area (float perimetro, float apotema){

	float area;
	area=perimetro*apotema; 

return area;
}



float apotema(float radio, float lado){

	float apotema;
	apotema=sqrt(pow(radio,2)-pow(lado/2,2));

return apotema;
}
