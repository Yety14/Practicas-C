#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(){
	float rad_1,rad_2,area,per;
	printf("Dame el valor de el radio grande\n");
	scanf("%f",&rad_1);
	printf("Dame el valor de el radio pequeño\n");
	scanf("%f",&rad_2);
	per=2*PI*(rad_1+rad_2);
	area=PI*pow(rad_1-rad_2,2);
	printf("El perimetro es:%f,el area es :%f",per,area);
return 0;
}
