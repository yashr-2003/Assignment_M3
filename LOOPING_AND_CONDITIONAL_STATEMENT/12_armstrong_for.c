//12. Program of Armstrong Number in C Using For Loop.

#include<stdio.h>
#include<math.h>
main()
{
	int n,rem,i,r,sum=0;
	
	printf("\n\tEnter the Number=");
	scanf("%d",&n);
	r=n;
		
	for(i=n;i>0;i=i/10)
		{
			rem=i%10;
			sum=sum+(rem*rem*rem);
		}
	
		if(sum==r)
			printf("yes");
			
		else
			printf("no");
}
