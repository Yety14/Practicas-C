#include <stdio.h>

char leerLetra ();
void convertirAMayuscula (char*);
void escribirLetra (char);

int main(){
	char letra; 
	letra=leerLetra ();
	convertirAMayuscula (&letra);
	escribirLetra (letra);
return 0;
}

char leerLetra (){
	char ltr_usr;
	printf("Dame una letra\n");
	scanf("%c",&ltr_usr);
return ltr_usr;
}

void convertirAMayuscula (char *ltr_usr){
	*ltr_usr=*ltr_usr-32;
		
return;
}

void escribirLetra (char ltr){
	printf("La letra en mayuscula es: %c\n",ltr);
return;
}
