//"Write a C program that read 5 numbers and sum of all odd values between them."
//This breaks if array is not specifically initialized as zeroes and the program is given no input.

#include <stdio.h>
int main(void) {
	int a[5]={0},i=0,sum=0;
		//array for input, iterator, return value
	printf("Enter 5 integers: ");
	for(i=0;i<5;i++){
		scanf("%i",&a[i]);
		printf("%i ",a[i]);
		if(a[i]%2!=0){sum+=a[i];}
	}
	printf("\nSum of odd values: %i\n",sum);
	return 0;
}