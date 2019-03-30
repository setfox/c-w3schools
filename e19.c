//"Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".
//2 3 1 5 works for testing.

#include <stdio.h>
int main(void){
	int p=0,q=0,r=0,s=0;
	printf("Enter 4 integers: ");
	scanf("%i %i %i %i",&p,&q,&r,&s);
	printf("%i %i %i %i\n",p,q,r,s);
	if(r>0&&s>0&&p%2==0&&q>r&&s>p&&(r+s)>(p+q)){
		printf("Correct values");
	} else {
		printf("Wrong values");
	}
	return 0;
}