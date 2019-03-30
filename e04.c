//"Print 3 characters in reverse."
//W3S hardcodes these values; I ask for input.

#include <stdio.h>
int main(void){
	char a,b,c;

	printf("Enter 3 characters to reverse: \n");
	scanf("%c%c%c",&a,&b,&c);
	printf("The reverse of %c%c%c is %c%c%c",a,b,c,c,b,a);

	return 0;
}