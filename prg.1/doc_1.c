/*ejemplo de entrada salida*/
#include <stdio.h>
int main(){
	//salida de datos
	printf("\nejemplo\n");
	printf("%8.3d\n", 1234);
	printf("%8.3d\n", 12);
	printf("%*.3d\n", 0, 12);
	printf("%8.*d\n", 5, 12);
	printf("%*.*d\n", 8, 4, 12);

	
	//entrada de datos
	int i, j, k;
//	scanf("%d%d%d", &i, &j, &k);
//	printf("entadad dec; salida dec:%d,octal:%o,hexa:%x.\n", i, j, k);
//	scanf("%o %o %o", &i, &j, &k);
//	printf("entadad octal; salida dec:%d,octal:%o,hexa:%x.\n", i, j, k);
//	scanf("%x %x %x", &i, &j, &k);
//	printf("entadad hexa; salida dec:%d,octal:%o,hexa:%x.\n", i, j, k);

	scanf("%2d%*[0-9]%2d%4d\n",&i,&j,&k);
	printf("%d/%d/%4d\n",i,j,k);
	scanf("%2d%2d%4d\n",&i,&j,&k);
	printf("%d/%d/%4d\n",i,j,k);

return 0;
}
