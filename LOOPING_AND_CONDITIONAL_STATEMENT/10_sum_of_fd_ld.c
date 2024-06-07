/*10.Write a program you have to make a summation of first and 
last Digit. (E.g., 1234 Ans: -5) */

#include<stdio.h>
main()
{
	int n,rem,sum,s,ld;


	printf("\n\t Enter the Number=");
	scanf("%d",&n);
	s=n;
	ld=n%10;
	while(n>0)
	{
		rem=n%10;
		n=n/10;
	}
	sum=ld+rem;
	printf("\n\t Sum of first and last digit of %d=%d",s,sum);
}
