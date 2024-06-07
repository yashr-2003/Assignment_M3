/*19. Write a program in C to calculate and print the electricity bill of a 
given customer.*/

#include<stdio.h>
main()
{
	char a[8];
	int b,c;
	
	printf("\n\tEnter your Name=");
	scanf("%s",&a);
	
	printf("\tEnter the Unit of your bill=");
	scanf("%d",&b);
	
	printf("\tEnter the Customer Id=");
	scanf("%d",&c);
	
	if(b>=800)
		printf("\n\n\t%s have to pay @2.00",a);
		
	else if(b>=600 && b<800)
		printf("\n\n\t%s have to pay @1.80",a);
		
	else if(b>=350 && b<600)
		printf("\n\n\t%s have to pay @1.50",a);
		
		
	else if(b<350)
		printf("\n\n\t%s have to pay @1.20",a);
		
	else
		printf("\n\n\t Invalid Unit");
	
	
}
