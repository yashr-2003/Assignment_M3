//30. WAP to convert years into days and days into years


#include<stdio.h>

main()
{

	int d,y,d1,y1;
		//day to year
	printf("*day to year");
	
	printf("\n\tEnter  Year=");
	scanf("%d",&y);
	
	d=y*365;
	printf("\n\tDays=%d",d);
	
			//year to day
	printf("\n\n*tyear to day");
	
	printf("\n\tEnter day=");
	scanf("%d",&d1);
	
	y1=d1/365;
	printf("\n\tyears=%d",y1);
}
