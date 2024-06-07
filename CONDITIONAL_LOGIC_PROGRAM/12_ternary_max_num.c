//12. WAP to find maximum number among 3 numbers using ternary operator.

#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("\n\n\t Enter the Number a=");
	scanf("%d",&a);
	
	printf("\n\n\t Enter the Number b=");
	scanf("%d",&b);
	
	printf("\n\n\t Enter the Number c=");
	scanf("%d",&c);
	
	(a>b && a>c)?printf("\n\n\t a is max"):(b>a && b>c)?printf("\n\n\t b is max"):(c>a && c>b)?printf("\n\n\t c is max"):printf("\b\b\b numbers are same");
}
