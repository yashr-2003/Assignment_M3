/*28.Convert years into days and months*/

#include<stdio.h>

main()
{
	int d,m,y;
	
	printf("\n\tEnter  Year=");
	scanf("%d",&y);
	
	m=y*12;
	d=y*365;
	printf("\n\n\tMonths=%d",m);
	printf("\n\tDays=%d",d);
	
}


