//"Find maximum of 3 integers."

#include <stdio.h>
int main(void){
	int a,b,c;
	printf("Enter 3 integers: \n");
	scanf("%i %i %i",&a,&b,&c);

	if(a>b&&a>c){printf("Largest is %i",a);}
	else if(b>a&&b>c){printf("Largest is %i",b);}
	else if(c>a&&c>b){printf("Largest is %i",c);}
	else if(a==b&&b==c){printf("They are equal");}
	else if(a==b&&a>c){printf("A and B equal %i", a);}
	else if(a==c&&a>b){printf("A and C equal %i", a);}
	else if(b==c&&b>a){printf("B and C equal %i", b);}
	else{printf("Error");}

	return 0;
}