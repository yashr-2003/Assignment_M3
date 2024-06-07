//9. Write a program make a summation of given number (E.g., 1523 Ans: -11) 

#include<stdio.h>
main()
{
	int n,rem,sum,s;


	printf("\n\t Enter the Number=");
	scanf("%d",&n);
		s=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\t Summation is of %d=%d",s,sum);
}
