//"Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month."

#include <stdio.h>
int main(void){
	char id[10]="";
	float hrs=0,wage=0;
	
	printf("Enter employee ID: \n");
	scanf("%s", &id[0]);
	printf("Enter hours worked: \n");
	scanf("%f", &hrs);
	printf("Enter hourly wage: \n");
	scanf("%f", &wage);
	
	printf("Emp %s - Salary: $%.2f\n",id,wage*hrs);
	
	return 0;
}