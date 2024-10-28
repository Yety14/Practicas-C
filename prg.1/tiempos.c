#include<stdio.h>
#include<time.h>

int main(){
	time_t inicio , fin;

	inicio =time(0);
	
	int iter=0,n;

	for(int i =0; i<100; i++){
		for(int j =0; j<100; j++){
			for(int k =0; k<100; k++){
				
				printf("\nnuevo:%d, i:%d, j:%d, k:%d\n",iter,i,j,k);
			}
		}
	}
	fin=time(0);
	printf("\n\nHa tardado: %gs\n",difftime(fin,inicio));
return 0;
}
