//4. WAP to print table up to given numbers

#include<stdio.h>
main()
{
	int a,i,c;
	
	printf("\n\n\t Enter the Number=");
	scanf("%d",&a);
	
	i=1;
	while(i<=10)
	{
		c=i*a;
		printf("\t\t%d * %d= %d",a,i,c);
		i++;
    	printf("\n");
	}

	
}
