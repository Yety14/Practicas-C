#include <stdio.h>
#include <string.h>

void printArrayNum( char [],int);
void printArrayChar(char [], int);


int main(){
	
	char t1[] = {65,66,67,68,69};		//array
	char t2[] = {97,108,111,104,0};		//cadena
	char t3[] = {'a','b','c','d','e'};	//array
	char t4[] = {'h','o','l','a','\0'};	//cadena
	char t5[4] = "Pepe";				//array
	char t6[] = "Pepe";					//cadena
	
	printf("\nt1:\n");
	printArrayNum( t1,6);
	printArrayChar( t1,6);
	printf("\n");
	
	printf("t2:\n");
	printArrayNum( t2,6);
	printArrayChar( t2,6);
	printf("\n");
	
	printf("t3:\n");
	printArrayNum( t3,6);
	printArrayChar( t3,6);
	printf("\n");
	
	printf("t4:\n");
	printArrayNum( t4,6);
	printArrayChar( t4,6);
	printf("\n");
	
	printf("t5:\n");
	printArrayNum( t5,6);
	printArrayChar( t5,6);
	printf("\n");
	
	printf("t6:\n");
	printArrayNum( t6,6);
	printArrayChar( t6,6);
	printf("\n");
	
	printf("TL: %lu\n",strlen(t1));		//da 9; 5 de t1 y 4 de t2
	printf("TF: %lu\n",sizeof(t1));		//da 5
	
return 0;	
}

void printArrayNum( char t[],int num){
	for(int i=0; i<num;i++){
		printf("%d,",t[i]);
	}
	printf("\n");
}
void printArrayChar(char t[], int num){
	for(int i=0; i<num;i++){
		printf("%c,",t[i]);
	}
	printf("\n");
}
