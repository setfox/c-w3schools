//"Print odd numbers from lowest to highest inclusive, and print their sum, from a range given by user input."
//Negative numbers faulty

#include <stdio.h>
int main(void){
	int i=0,x=0,y=0,sum=0;
	printf("Enter 2 numbers: ");
	scanf("%i %i",&x,&y);
	printf("%i %i\n",x,y);
	if(x<y){
		for(i=x;i<(y+1);i++){
			if(i%2==1){
				printf("%i ",i);
				sum+=i;
			}
		}
	} else if (x==y){
		printf("They are equal\n");
	} else {
		for(i=y;i<(x+1);i++){
			if(i%2==1){
				printf("%i ",i);
				sum+=i;
			}
		}
	}
	printf("\nSum is %i\n",sum);
	return 0;
}