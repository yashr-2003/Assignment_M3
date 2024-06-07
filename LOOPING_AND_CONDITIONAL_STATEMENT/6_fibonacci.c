//6. WAP to print Fibonacci series up to given numbers 

#include<stdio.h>
main()
{
	int a,b,c,f,i;
	
	printf("\n\n\t Enter the Number=");
	scanf("%d",&f);
	
	a=0;
	b=1;
	printf("%d\t%d",a,b);
	i=0;
	while(i<=f)
	{
		c=a+b;
		
		printf("\t%d ",c);
		a=b;
		b=c;
		c=0;
		i++;	
	}
}
