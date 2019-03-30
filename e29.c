//"Write a C program that read 5 numbers and sum of all odd values between them."

#include <stdio.h>
int main(void){
	int i=0,n=0,sum=0;
		//iterator, input, total
	printf("Input 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%i",&n);
		printf("%i ",n);
		if(n%2==1){
			sum+=n;
		}
	}
	printf("\nOdd total: %i\n",sum);
	return 0;
}