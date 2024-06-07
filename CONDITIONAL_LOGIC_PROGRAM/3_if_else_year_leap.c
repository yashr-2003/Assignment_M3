//3. WAP to check if the given year is a leap year or not.

#include<stdio.h>

main()
{
	int y;
	
	printf("Enter the year=");
	scanf("%d",&y);
	
	if(y%4==0)
		printf("%d Year is leap",y);
	else
	{
		printf("%d year is not leap",y);
	}
}
