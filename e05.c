//"Compute the perimeter and area of a rectangle."
//W3S hardcodes these values. I ask for input.

#include <stdio.h>
int main(void){
	int h=0,w=0,p=0,a=0;
		//height, width, perimeter, area

	printf("Enter height and width (inches): \n");
	scanf("%d %d",&h,&w);

	p=(2*h)+(2*w);
	a=h*w;

	printf("Perimeter is %d\"\nArea is %d\"\n",p,a);

	return 0;
}