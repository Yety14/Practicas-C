#include <stdio.h>
#include <math.h>

int main(){

	printf("flotante: \t\t %f \t\t %f \n",12.1234567,12.12345678987654321E10);
	printf("not cientifica: \t %e \t\t %e \n",12.1234567,12.12345678987654321E10);
	printf("automatico: \t\t %g \t\t %g \n",12.3456,12.12345678987654321E10);
	printf("flotante 4dec: \t\t %.4f \t\t %.4f \n",12.34,12.12345678987654321E10);
	printf("cient 4dec: \t\t %.4e \t\t %.4e \n",12.34,12.12345678987654321E10);
	printf("automatico 4dig: \t %.4g \t\t\t %.4g \n",12.34,12.12345678987654321E10);

	return 0;
}
