/*23. WAP to calculate swap 2 numbers with using of multiplication 
and division.*/

#include<stdio.h>

main()
{
	int num1,num2;
	printf("\n\n\t*Before Swapping");
	printf("\n\n\tEnter num1=");
	scanf("%D",&num1);
	
	printf("\n\n\tEnter num2=");
	scanf("%d",&num2);
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	printf("\n\n\t*After Swapping");
	
	printf("\n\n\tnum1=%d",num1);
	printf("\n\n\tnum2=%d",num2);
}
