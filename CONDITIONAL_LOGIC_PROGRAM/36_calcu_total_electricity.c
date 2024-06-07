/*36. Write a C program to input electricity unit charges and calculate total 
electricity bill according to the given condition: */

#include<stdio.h>
main()
{
	float a,b,c;
	
	printf("Enter the Unit of bill=");
	scanf("%f",&a);
	
	if(a>0 && a<=50)
	{
		b=a*0.50;
		c=b*0.20; //20%
		printf("\n\n\t total bill=%.2frs",b-c);
	}
	else if(a>50 && a>=150)
	{
		b=a*0.75;
		c=b*0.20; //20%
		printf("\n\n\t total bill=%.2frs",b-c);
	}	
	else if(a<150 && a>=250)
	{
	
		b=a*1.20;
		c=b*0.20; //20%
		printf("\n\n\t total bill=%.2frs",b-c);
	}
	else if(a>250)
	{
	
		b=a*1.50;
		c=b*0.20; //20%
		printf("\n\n\t total bill=%frs",b-c);
	}
	else
		printf("\n\n\t Minus Number is Not Allowed");
		
}
