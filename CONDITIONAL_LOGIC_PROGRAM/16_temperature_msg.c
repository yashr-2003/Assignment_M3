/*16. Write a C program to read temperature in centigrade and display a
 suitable message according to the temperature state below:*/
 
#include<stdio.h>
main()
{
	int temp;
	
	printf("\n\n\tEnter the temperature =");
	scanf("%d",&temp);
	
	if(temp<0)
		printf("\n\n\t%d is freezing weather",temp);
		
	else if(temp>=0 && temp<10)
		printf("\n\n\t%d is very cold weather",temp);
		
	else if(temp>=10 && temp<20)
		printf("\n\n\t%d is very cold weather",temp);
		
	else if(temp>=20 && temp<30)
		printf("\n\n\t%d is very Normal temperatur",temp);
		
	else if(temp>=30 && temp<40)
		printf("\n\n\t%d is Hot weather",temp);
		
	else if(temp>=40)
		printf("\n\n\t%d is very Hot temperature",temp);
		
	else
		printf("Invalid temperature");
}
