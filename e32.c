//"Print all numbers between 1 to 500 which divided by a specified number have a remainder of 3."
//I have generalized so all values are input by the user (rather than only the divisor).

#include <stdio.h>
int main(void){
	int i=0,m=0,n=0,r=0;
		//iterator, maximum, number, remainder
	printf("Enter divisor: ");
		scanf("%i",&n);
		printf("%i\n",n);
	printf("Enter remainder: ");
		scanf("%i",&r);
		printf("%i\n",r);
	printf("Enter maximal limit: ");
		scanf("%i",&m);
		printf("%i\n",m);
	for(i=0;i<m;i++){
		if(i%n==r){
			printf("%i\n",i);
		}
	}
	return 0;
}