/*8. Write a program to find out the max from given number 
(E.g., No: -1562 Max number is 6)*/
#include<stdio.h>
main()
{
	int n,rem,max=0,s;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&n);
	s=n;
	while(n>0)
	{
		rem=n%10;
		if(rem>max)
		{
			max=rem;
		}
		n=n/10;
		
	}
		printf("\n\t Max Number of %d=%d",s,max);
}

