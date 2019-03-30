//"Find and print the square of each even value between 1 and a specified value."

#include <stdio.h>
int main(void){
	int i=0,n=0;
	printf("Enter maximal range: ");
	scanf("%i",&n);
	printf("%i\n",n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%i^2=%i\n",i,i*i);
		} 
	}
	return 0;
}