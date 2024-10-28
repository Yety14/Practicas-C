#include<stdio.h>
#define TAM 10

int main(){
	char DNI[TAM]="000000000";
	FILE* arch;									
	arch=fopen("hola.txt","w");				
	if (arch==NULL) {							
		fprintf(arch,"No se pudo abrir el archivo\n");
	}
	else {
		printf("Archivo abierto correctamente\n");
		printf("Esribe tu DNI\n");
		scanf("%s",DNI);
		fprintf(arch,"%s\n\n",DNI);
		fwrite(DNI,sizeof(char),sizeof(DNI)-1,arch);
		}	
	fclose(arch);							
	
return 0;
}
