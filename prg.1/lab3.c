/*
   Autor: Guillermo López de Arechavaleta 
   Fecha: 04/03/2024
   Versión: 1.0
   Explicación:En este ejercicio lo que tenemos que hacer es pedir al usuario el valor de la base y de la alturade un rectagulo para calcular y devolver por pantalla el área y el perímetro. 
*/
#include<stdio.h>

int f_perim(int, int);
int f_area(int, int);

int main(){
	int h, b, area,perim;
	printf("Dame el valor de la altura (h)\n");
	scanf("%d",&h);
	printf("Dame el valor de la base(b)\n");
	scanf("%d",&b);
	area = f_area(b,h);
	perim = f_perim(b,h);
	printf("El área es: %d.\nEl perímetro es: %d.\n",area,perim);
return 0;
}
	
int f_area(int b, int h){
	int area;
	area=(b*h);
return area;
}
	
int f_perim(int b, int h){
	int perim;
	perim=(2*b)+(2*h);
return perim;
}
