//"Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots."

#include <stdio.h>
#include <math.h>
int main(void){
	double a,b,c,root;
	printf("Input 3 numbers: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("%.1lf %.1lf %.1lf\n",a,b,c);
	root=sqrt((b*b)-(4*(a*c)));
	if(root>0&&a!=0){
		double x,y;
		x=(-b+root)/(2*a);
		y=(-b-root)/(2*a);
		printf("Root1 = %lf\nRoot2 = %lf\n",x,y);
	} else {
		printf("Impossible calculation\n");
	}
	return 0;
}