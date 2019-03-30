//"Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80."

#include <stdio.h>
int main(void){
	int test=0;
	printf("Enter number: ");
	scanf("%i",&test);
	printf("%i\n",test);
	
	if (test>=0&&test<=20){
		printf("Range: 0-20");
	} else if (test>=21&&test<=40) {
		printf("Range: 21-40");
	} else if (test>=41&&test<=60) {
		printf("Range: 41-60");
	} else if (test>=61&&test<=80) {
		printf("Range: 61-80");
	} else {
		printf("Please enter positive value");
	}
}