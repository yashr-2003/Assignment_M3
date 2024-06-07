/*3. WAP to Find Area And Circumference of Circle*/

#include<stdio.h>

main()

{
	float r,Area,c,pi=3.14;
	
	printf("\n\n\n Enter radius=");
	scanf("%f",&r);
	
	Area=pi*r*r;
	
	printf("\n\n\n Area=%.2f",Area);
	
	c=2*(pi*r);
	
	printf("\n\n\n circumference=%.2f",c);
}
