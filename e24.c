//"Write a C program that reads two integers and checks if they are multiplied or not."

#include <stdio.h>
int main(void){
	int a=0,b=0;
	printf("Enter 2 numbers: ");
	scanf("%i %i",&a,&b);
	printf("%i %i\n",a,b);
	if(a>=1&&b>=1&&a!=b){
		if(a%b==0||b%a==0){
			printf("Multiplied!");
		} else {
			printf("No multiples found");
		}
	} else {
		printf("Use better numbers");
	}
	return 0;
}