//18. Write a C Program to Print the Multiplication Table of N.

#include<stdio.h>
main()
{
	int i,a;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d  *  %d= %d",a,i,a*i);
	}
}
