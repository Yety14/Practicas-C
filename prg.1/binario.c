#include<stdio.h>

#define TAM 4

void pideArray(int [TAM]);
void escribeArrayBinario(int [TAM],FILE *);
void leerArray(int [TAM],FILE *);
void escribeArray(int [TAM]);

int main(){
	int lista_1[TAM], lista_2[TAM];
	FILE * flista;
	
	pideArray(lista_1);
	
	flista = fopen("lista.dat","wb");
	if (flista==NULL) {
		printf("No se pudo abrir el 1º archivo\n");
	}
	else {
		escribeArrayBinario(lista_1,flista);
		fclose(flista);
		flista = fopen("lista.dat","rb");
		if (flista==NULL) {
				printf("No se pudo abrir el 2º archivo\n");
		}
		else {
			leerArray(lista_2,flista);
			fclose(flista);
			printf("Array original:\n");
			escribeArray(lista_1);
			printf("Array leido:\n");
			escribeArray(lista_2);
		}
	}	
return 0;
}

void pideArray(int l[TAM]){
	for (int i=0; i<TAM; i++){
		scanf("%d",&l[i]);
	}
}

void escribeArrayBinario(int l[TAM],FILE *f){
	fwrite(l,sizeof(int),TAM,f);
}

void leerArray(int l[TAM],FILE *f){
	fread(l,sizeof(int),TAM,f);
}

void escribeArray(int l[TAM]){
	for (int i=0; i<TAM; i++){
		printf("[%d]:%d\t",i,l[i]);
	}
	printf("\n");
}
