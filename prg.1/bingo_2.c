#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM_COL 9
#define TAM_FIL 3

void generarPlantilla(int [TAM_FIL][TAM_COL]);
void rellenarPlantilla(int [TAM_FIL][TAM_COL]);
void mostrarTxt(int [TAM_FIL][TAM_COL]);
void mostrarTerminal(int [TAM_FIL][TAM_COL]);
char continuar();

int main(){
	srand(time(0));
	char sol;
	int tabla[TAM_FIL][TAM_COL];
	do{
		generarPlantilla(tabla);
		rellenarPlantilla(tabla);
		mostrarTxt(tabla);
		mostrarTerminal(tabla);
		sol=continuar();
	}
	while(sol!='n');
	return 0;
}

void generarPlantilla(int tabla[TAM_FIL][TAM_COL]){
/*	FILE* arch;
	arch=fopen("bingo.txt","w");
	if(arch==NULL){
		printf("No se abrió bien el archivo\n");
	}else{
*/		int cont=0, columna;			
		for (int i=0; i<TAM_FIL; ++i){			//poner todo a 0
			for (int j=0; j<TAM_COL; ++j){
				tabla[i][j]=0;
			}
		}	
		for (int i=0; i<5; ++i) {				//rellenar primera fila
			columna = rand() % TAM_COL;
			if (tabla[0][columna] == -1){
				i-=1;
			} else{
				tabla[0][columna] = -1;
			}
		}
		for (int i=0; i<5; ++i) {				//rellenar segunda fila
			columna = rand() % TAM_COL;
			if (tabla[1][columna] == -1){
				i-=1;
			} else{
				tabla[1][columna] = -1;
			}
		}
		for (int i=0; i<9; ++i) {				//rellenar posiciones complicadas tercera fila;
			if (tabla[0][i] == -1 && tabla[1][i] == -1){
				tabla[2][i] = 2;
			} else{
				if (tabla[1][i] == 0){
						tabla[2][i] = -1;
						cont+=1;
				}
			}
		}
		while (cont<5){							//rellenar posiciones restantes tercera;
			columna = rand() % TAM_COL;
			if (tabla[2][columna] == 0){
				tabla[2][columna] = -1;	
				cont+=1;
			}
		}
/*		for (int i=0; i<TAM_FIL; ++i){			//guardar en el .txt
			for (int j=0; j<TAM_COL; ++j){
				fprintf(arch,"%d\t",tabla[i][j]);
			}
			fprintf(arch,"\n");
   		}
		fclose(arch);
	}	  
*/}

void rellenarPlantilla(int tabla[TAM_FIL][TAM_COL]){
	int max, min, contador,num1,num2,menor,mayor;
	for (int c=0; c<TAM_COL; ++c){
		contador=0;
		for (int f=0;f<TAM_FIL; ++f){
			if (tabla[f][c]==-1){
				contador+=1;
			} else if(tabla[f][c]==2){
				tabla[f][c]=0;
			}
		}
		if (c == 0) {
			max = 9;
			min = 1;
		} else{
			max = 10*(c+1)-1;
			min = (10*c);
		}
		switch (contador){					//decidr el menor
			case 1:
				num1=rand() % (max-min+1)+min;			
				if (tabla[0][c]==-1){
					tabla[0][c]=num1;
				} else{
					if (tabla[1][c]==-1){
						tabla[1][c]=num1;
					} else{
						tabla[2][c]=num1;
					}
				}
				break;
			case 2:
				num1=rand() % (max-min+1)+min;
				do{
					num2=rand() % (max-min+1)+min;
					if (num2<num1){
						menor=num2;
						mayor=num1;
					} else{
						menor=num1;
						mayor=num2;
					}
				} while(num2==num1);
				if (tabla[0][c]==-1){
					if(tabla[1][c]==-1){
						tabla[0][c]=menor;
						tabla[1][c]=mayor;
					} else{
						tabla[0][c]=menor;
						tabla[2][c]=mayor;
					}
				} else{
					tabla[1][c]=menor;
					tabla[2][c]=mayor;
				}
				break;
		}
	}
}


void mostrarTxt(int tabla[TAM_FIL][TAM_COL]){
	FILE* arch;
	arch=fopen("bingo.txt","w");
	if(arch==NULL){
		printf("No se abrió bien el archivo\n");
	}else{
		fprintf(arch,"----------------------------------------------\n");
		for (int f=0; f<TAM_FIL; ++f){			//actualizar tabla en txt
			fprintf(arch,"|");
			for (int c=0; c<TAM_COL; ++c){
				if(tabla[f][c]==0){
					fprintf(arch,"    |");
				} else{
					fprintf(arch," %2d |",tabla[f][c]);
				}
        	}
        	fprintf(arch,"\n----------------------------------------------\n");
		}
	}
	fclose(arch);
}

void mostrarTerminal(int tabla[TAM_FIL][TAM_COL]){
		printf("\n----------------------------------------------\n");
		for (int f=0; f<TAM_FIL; ++f){			//mostrar tabla en el terminal
		printf("|");
			for (int c=0; c<TAM_COL; ++c){
				if(tabla[f][c]==0){
					printf("    |");
				} else{
					printf(" %2d |",tabla[f][c]);
				}
        	}		
		printf("\n----------------------------------------------\n");
		}
}

char continuar(){
	char cont;
	printf("¿Quieres hacer una nueva tabla? s/n ");
	scanf(" %c",&cont);
	return cont;
}
