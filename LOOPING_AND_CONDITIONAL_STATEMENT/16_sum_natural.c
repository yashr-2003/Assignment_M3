//16. Calculate the Sum of Natural Numbers Using the While Loop.

#include<stdio.h>
main()
{
	int a,i,sum=0;
	
	printf("\n\t Enter the boundry of Natural No.=");
	scanf("%d",&a);
	
	i=0;
	while(i<=a)
	{
		sum=sum+i;	
		i++;
	}
	
		printf("\n\t Sum of Natural no. %d=%d",a,sum);
}
