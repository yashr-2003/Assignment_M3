 /*1. Write a C program to accept two integers and check whether 
they are equal or not*/
 
#include<stdio.h>

main()
{
	int a,b;
	
	printf("\n\n\tEnter a=");
	scanf("%d",&a);
	
	printf("\n\n\tEnter b=");
	scanf("%d",&b);
	
	if(a==b)
		printf("\n\n\tEqual");
		
	else
		printf("\n\n\tNot Equal");
} 
