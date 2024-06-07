//5. WAP to print factorial of given number

#include<stdio.h>
main()
{
	int a,b,c=1;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&a);
	
	b=1;
	while(b<=a)
	{
		c=c*b;
		b++;
	}
	printf("\n\tFactorial of is %d",c);
}
