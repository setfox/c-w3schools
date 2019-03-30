//"Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers."

#include <stdio.h>
int main(void){
	int i=0,x=0,p=0,n=0,z=0;
		//iterator, input, positive, negative, zero
	printf("Enter 5 numbers: ");
	for(i=0;i<6;i++){
		scanf("%i",&x);
		printf("%i ",x);
		if(x>0){p++;}
		else if(x<0){n++;}
		else if(x==0){z++;}
		else{printf("Error");}
	}
	printf("\nPositive: %i\nNegative: %i\nZeroes: %i\n",p,n,z);
	return 0;
}