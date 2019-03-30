//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
//W3S uses individual HMS variables. This is probably better practice, as it allows you more awareness of the intermediary processes.

#include <stdio.h>
int main(void){
	int s=0;

	printf("Enter amount of seconds: ");
	scanf("%i",&s);
	printf("%i\n",s);

	printf("H:M:S - %i:%i:%i",s/3600,(s/60)%60,s%60);

	return 0;
}