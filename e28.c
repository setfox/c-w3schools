//"Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values."
//Second if statement (outside the for loop) is to filter out cases where we would otherwise divide zero by zero 

#include <stdio.h>
int main(void){
	int i=0,n=0,ctr=0;
		//iterator, input, counter
	float total=0;
	printf("Enter 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%i",&n);
		printf("%i ",n);
		if(n>0){
			ctr++;
			total+=n;
		}
	}
	if(ctr==0){
		printf("\nNo positive values\n");
	} else {
		printf("\nPositive: %i\n",ctr);
		printf("Average: %f\n",total/ctr);
	}
	return 0;
}