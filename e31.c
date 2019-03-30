//"Check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0."

#include <stdio.h>
int main(void){
	int x=0;
	printf("Enter number: ");
	scanf("%i",&x);
	printf("%i\n",x);
	if(x>0&&x%2==0){
		printf("Positive even\n");
	} else if(x>0&&x%2!=0){
		printf("Positive odd\n");
	} else if(x<0&&x%2==0){
		printf("Negative even\n");
	} else if(x<0&&x%2!=0){
		printf("Negative odd\n");
	} else{
		printf("Even\n");
	}
	return 0;
}