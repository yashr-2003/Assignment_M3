/*6. Find area of Triangle Formula : A = 1/2 × b × h */

#include<stdio.h>

main()
{
	float b,h,A;
	
	printf("Enter b=");
	scanf("%f",&b);
	
	printf("Enter h=");
	scanf("%f",&h);
	
	A=0.5*(b*h);
	
	printf("Area of Triangle=%.2f",A);
}
