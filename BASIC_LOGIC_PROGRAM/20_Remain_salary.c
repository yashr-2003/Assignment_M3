/*20. Accept monthly salary from the user and deduct 10% insurance 
premium, 10% loan installment find out of remaining salary. */

#include<stdio.h>

main()
{
	float a,IP,LI,RS;
	
	printf("\n\n\n\tEnter salary=");
	scanf("%f",&a);
	
	IP=a*0.1;//(0.1=10%)
	
	LI=a*0.1;//(0.1=10%)
	
	RS=a-(IP+LI);
	
	printf("\n\n\tRemaining Salary=%f",RS);
	
	
}
