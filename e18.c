//"Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days."

#include <stdio.h>
int main(void){
	int days=0;
	printf("Enter number of days: ");
	scanf("%i",&days);
	printf("%i\n",days);
	printf("%i years\n",days/365);
	printf("%i months\n",(days%365)/30);
	printf("%i days\n",(days%365)%30);
	return 0;
}