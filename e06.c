//"Computer perimeter & area of circle."
//W3S results are based on PI=3.14

#include <stdio.h>
int main(void){
	const float PI=3.14159265359;
	float r=0,p=0,a=0;
		//radius, perimeter, area

	printf("Enter radius (inches): \n");
	scanf("%f",&r);
	
	p=((2*PI)*r);
	a=(r*r)*PI;

	printf("Perimeter: %f\nArea: %f\n",p,a);

	return 0;
}