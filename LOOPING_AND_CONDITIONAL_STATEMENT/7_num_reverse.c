//7. WAP to print number in reverse order e.g.: number = 64728 --->
// reverse = 82746 

#include<stdio.h>
main()
{
	int num,rem,i;
	
	printf("\n\tEnter the Number=");
	scanf("%d",&num);
	printf("\n\tReverse Number=");
	for(i=1;i<=num;i++)
	{
		rem=num%10;
		printf("%d",rem);
		num=num/10;
	}
	
}
