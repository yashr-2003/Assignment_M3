//12. Program of Armstrong Number in C Using  While Loop

#include<stdio.h>
main()
{
	int n,rem,sum=0,r;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&n);
		
	r=n;	
	
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);	
		n=n/10;
	}
	if(sum==r)
		printf("\n\t %d is Armstrong Number",sum);
		
	else
		printf("\n\t %d is Not Armstrong Number",sum);
	
}
