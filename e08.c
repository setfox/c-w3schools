//"Convert days into years, weeks, and days (ignore leap year)."

#include <stdio.h>
int main(void){
	int x=0,y=0,w=0,d=0;
		//input, years, weeks, days

	printf("Enter number of days: \n");
	scanf("%i", &x);

	y=x/365;
	w=(x%365)/7;
	d=(x%365)%7;

	printf("Years=%i\nWeeks=%i\nDays=%i\n",y,w,d);

	return 0;
}