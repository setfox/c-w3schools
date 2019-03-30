//"Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes."

#include <stdio.h>
int main(void){
	int amt=0;

	printf("Enter amount: ");
	scanf("%i",&amt);
	printf("$%i.00\n",amt);
	
	printf("There are: \n");
	printf("%i hundreds\n",(int)amt/100);
	amt=amt%100;
	printf("%i fifties\n",(int)amt/50);
	amt=amt%50;
	printf("%i twenties\n",(int)amt/20);
	amt=amt%20;
	printf("%i tens\n",(int)amt/10);
	amt=amt%10;
	printf("%i fives\n",(int)amt/5);
	amt=amt%5;
	printf("%i twos\n",(int)amt/2);
	amt=amt%2;
	printf("%i ones\n",(int)amt);

	return 0;
}