/*2. Write a program to make Simple calculator (to make addition, 
subtraction,multiplication, division and modulo)*/

#include<stdio.h>

main()

{
	int a,b,c;
	printf("\n\n\n\tEnter a=");
	scanf("%d",&a);
	
	printf("\n\n\n\tEnter b=");
	scanf("%d",&b);
	
	c=a+b;
	printf("\n\n\n\tAddition=%d",c);	
	
		c=a-b;
	printf("\n\n\n\tsubtraction=%d",c);

		c=a*b;
	printf("\n\n\n\tmultiplication=%d",c);
	
		c=a/b;
	printf("\n\n\n\tdivition=%d",c);
	
		c=a%b;
	printf("\n\n\n\tmodulo=%d",c);
}
