#include <stdio.h>

void funcRec(int,int);

int main(){
	int n,base;
	printf("Dame un numero \n");
	scanf("%d",&n);
	printf("Dame la base a la que quieres cambiar \n");
	scanf("%d",&base);
	printf("Tu número es: ");
	funcRec(base,n);
	printf("\n");
return 0;
}

void funcRec(int base, int n){
	int u,d;
	if (n>0){
		if(base==2){
			u=n%2;
			d=n/2;
			funcRec(base,d);
			printf("%d",u);
		}
		else if(base==8){
			u=n%8;
			d=n/8;
			funcRec(base,d);
			printf("%o",u);
		}
		else if(base==16){
			u=n%16;
			d=n/16;
			funcRec(base,d);
			printf("%x",u);
		}
		else if(base==36){
			u=n%36;
			d=n/36;
			funcRec(base,d);
			if(u<=9){
				printf("%x",u);
			}
			else {
				printf("%c",u+55);
			}
		}
		else if(base==64){
			u=n%64;
			d=n/64;
			funcRec(base,d);
			if(u<=9){
				printf("%x",u);
			}
			else if(u>9 && u<36){
				printf("%c",u+55);
			}
			else{
				printf("%c",u+61);
			}
		}
		else{
			printf("Numero de base no valido");
		}
	}
return;
}
