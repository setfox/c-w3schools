//"Write a C program to calculate the distance between the two points."

// Getting absolute (positive) values via squaring seems dubious. It would probably be better to work with positive values using a relational comparison to ensure you're subracting the smaller coordinate from the larger one.

#include <stdio.h>
#include <math.h>
int main(void){
	float x1=0,y1=0,x2=0,y2=0;
		//coordinates
	float hypotenuse=0,xleg=0,yleg=0;
		//sides of triangle

	printf("Enter coordinates for point 1: ");
	scanf("%f %f",&x1,&y1);
	printf("%.1f, %.1f\n",x1,y1);
	printf("Enter coordinates for point 2: ");
	scanf("%f %f",&x2,&y2);
	printf("%.1f, %.1f\n",x2,y2);

	xleg=x2-x1;
	yleg=y2-y1;
	hypotenuse=(xleg*xleg)+(yleg*yleg);
	printf("Distance is %f",sqrt(hypotenuse));
		//pythagorean theorem

	return 0; 
}