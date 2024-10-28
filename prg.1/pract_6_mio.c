#include <stdio.h>

void funcRec(int,int);

int main(){
	int n,base;
	printf("Dame un numero mayor que 0\n");
	scanf("%d",&n);
	printf("Dame la base a la que quieres cambiar (menor o igual a 62) \n");
	scanf("%d",&base);
	if (base<=62){
		printf("Tu número es: ");
		funcRec(base,n);
	}
	else{
		printf("Base no valida");
	}
	printf("\n");
return 0;
}

void funcRec(int base, int n){
	int rest,coc;
	if (n>0){
		rest=n%base;
		coc=n/base;
		funcRec(base,coc);
		if(rest<=9){
			printf("%d",rest);
		}
		else if(rest<=35){
			printf("%c",rest+55);
		}
		else{
			printf("%c",rest+61);
		}
	}	
return;
}
