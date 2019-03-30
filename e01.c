//"Print your name, date of birth, and mobile number." 
//W3S hardcodes these values; I ask for input.

#include <stdio.h>
int main(void){
	char name[30]="", dob[10]="", phone[15]="";

	printf("Enter name: \n");
	scanf("%s", name);
	printf("Enter DOB: \n");
	scanf("%s", dob);
	printf("Enter phone: \n");
	scanf("%s", phone);

	printf("Name: %s\n", name);
	printf("DOB: %s\n", dob);
	printf("Phone: %s\n", phone);

	return 0;
}