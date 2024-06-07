//15.Calculate sum of 10 numbers using of while loop

#include<stdio.h> 
main()
{
	int n=10,i,sum=0;
	
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("\n\tSum of 10 Number is=%d",sum);
	
}
