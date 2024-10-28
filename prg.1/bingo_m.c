#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_X 9
#define TAM_Y 3

void generarPlantilla(FILE* arch);
char continuar();

int main(){
	srand(time(0));
	char sol;
	FILE* arch;
	do{
		arch=fopen("prueba.txt","w");
		if(arch==NULL){
			printf("No se abrió bien el archivo\n");
		}
		else{
			generarPlantilla(arch);
		    fclose(arch);
			sol=continuar();
		}
	}
	while(sol!='n');
return 0;
}

void generarPlantilla(FILE* arch){
	int tabla[TAM_Y][TAM_X];
	fprintf(arch,"-------------------------------------------------------------------------\n");
    for (int i = 0; i < TAM_Y; ++i){
    	fprintf(arch,"|");
		int cont =0;
    	for (int j = 0; j < TAM_X; ++j){
			int caso=rand()%2;
			
			int max, min;
			if (j == 0) {
				max = 9;
				min = 1;
			}
			else {
				max = 10*(j+1)-1;
				min = (10*j);
			}

			if (caso != 0 && cont <5){
				tabla[i][j] = rand () % (max-min+1)+min;
                fprintf(arch, "\t%d\t|", tabla[i][j]);
                cont+=1;
			}
			else{
            	fprintf(arch, "\t\t|");
			}
        }       
        fprintf(arch, "\n-------------------------------------------------------------------------\n");
    }
return ;
}

char continuar(){
	char cont;
	printf("¿Quieres hacer una nueva tabla? s/n ");
	scanf(" %c",&cont);
return cont;
}
