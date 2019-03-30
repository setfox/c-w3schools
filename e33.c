//"Find the highest value and the input position, from a list of integers input by the user."
//Tried using 2 iterators but it didn't occur to me to compare to a "maximum" variable.

#include <stdio.h>
int main(void){
	int a[5]={0},i=0;
	printf("Enter 5 integers: ");
	for(i=0;i<5;i++){
		scanf("%i",&a[i]);
		printf("%i ",a[i]);
	}
	if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4]){
		printf("\nLargest: %i\nIndex: 1\n",a[0]);
	} else if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4]){
		printf("\nLargest: %i\nIndex: 2\n",a[1]);
	} else if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3]&&a[2]>a[4]){
		printf("\nLargest: %i\nIndex: 3\n",a[2]);
	} else if(a[3]>a[0]&&a[3]>a[1]&&a[3]>a[2]&&a[3]>a[4]){
		printf("\nLargest: %i\nIndex: 4\n",a[3]);
	} else if(a[4]>a[0]&&a[4]>a[1]&&a[4]>a[2]&&a[4]>a[3]){
		printf("\nLargest: %i\nIndex: 5\n",a[4]);
	} else{
		printf("Some numbers are equal");
	}
	return 0;
}