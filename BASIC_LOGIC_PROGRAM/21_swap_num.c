/*21. Accept 2 numbers from user and swap 2 numbers with using 
3rd variable and without using 3rd variable */

#include<stdio.h>

main()
{
	printf("* Using Third variable");
	
	int num1,num2,N1,N2,c;
	printf("\n\n\t-Before Swapping");
	
	printf("\n\n\tEnter num1=");
	scanf("%d",&num1);
	
	printf("\n\n\tEnter num2=");
	scanf("%d",&num2);
	
	c=num1;
	num1=num2;
	num2=c;
	
	printf("\n\n\t-After swapping(1)");
	printf("\n\n\tnum1=%d",num1);
	printf("\n\n\tnum2=%d",num2);
	
	
	//without third variable
	
	
		printf("\n* without using Third variable");
		printf("\n\n\t-Before Swapping");
	
	
	printf("\n\n\tEnter N1=");
	scanf("%d",&N1);
	
	printf("\n\n\tEnter N2=");
	scanf("%d",&N2);
	
	N1=N1+N2;
	N2=N1-N2;
	N1=N1-N2;
	
	printf("\n\n\t-After swapping(2)");
	printf("\n\n\tnum1=%d",N1);
	printf("\n\n\tnum2=%d",N2);
}
