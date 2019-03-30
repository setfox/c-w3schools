//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).
//For this exercise, I started printing input back to the command line. This would probably be unnecessary in any IDE other than paizacloud, but Input is on a separate tab and is not visible in the Output tab. 

#include <stdio.h>
int main(void){
	int km=0;
	float lt=0;
		//kilometers, liters
	printf("Enter distance (km) and fuel usage (lt): ");
	scanf("%i %f",&km,&lt);
	printf("%i, %f\n",km,lt);
	printf("Avg consumption is %f",km/lt);
	return 0;
}