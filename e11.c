//"Write a C program that accepts two item's weight (floating points' values) and number of purchase (floating points' values) and calculate the average value of the items."
//Specifies float type, but solution uses double type to avoid rounding error.

#include <stdio.h>
int main(void){
	double w1=0,q1=0,w2=0,q2=0,avg=0;
		//weight, quantity, average
	printf("Enter item1 weight & quantity:\n");
	scanf("%lf %lf",&w1,&q1);
	printf("Enter item2 weight & quantity:\n");
	scanf("%lf %lf",&w2,&q2);
	avg=((w1*q1)+(w2*q2))/(q1+q2);
	printf("Average item weight is %lf lbs\n",avg);
	return 0;
}