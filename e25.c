//"Write a C program that reads an integer between 1 and 12 and print the month of the year in English."
//W3S uses switch statement, which I did not know about at this time

#include <stdio.h>
int main(void){
	int month=0;
	printf("Enter month number: ");
	scanf("%i",&month);
	printf("%i\n",month);
	if(month>=1&&month<=13){
		if(month==1){printf("1=January\n");}
		if(month==2){printf("2=February\n");}
		if(month==3){printf("3=March\n");}
		if(month==4){printf("4=April\n");}
		if(month==5){printf("5=May\n");}
		if(month==6){printf("6=June\n");}
		if(month==7){printf("7=July\n");}
		if(month==8){printf("8=August\n");}
		if(month==9){printf("9=September\n");}
		if(month==10){printf("10=October\n");}
		if(month==11){printf("11=November\n");}
		if(month==12){printf("12=December\n");}
		if(month==13){printf("13=Smarch\n");}
	} else {
		printf("Number out of bounds");
	}
	return 0;
}