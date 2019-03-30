//"Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if values are valid."

#include <stdio.h>
int main(void){
	float x=0,y=0,z=0,p=0;
		//p=perimeter
	printf("Enter 3 numbers: ");
	scanf("%f %f %f",&x,&y,&z);
	printf("%.1f %.1f %.1f\n",x,y,z);
	if(x < (y+z) && y < (x+z) && z < (y+x)){
		p=x+y+z;
		printf("Perimeter: %.1f\n",p);
	} else {
		printf("Not possible\n");
		//triangles cannot be made with one side 
		//longer than the sum of the other 2
	}
	return 0;
}