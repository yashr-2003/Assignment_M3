/*31. Write a program in C to read any Month Number in integer and display the 
number of days for this month. */

#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\tEnter the Number of Any Month=");
	scanf("%d",&a);
	
	switch(a)
	{
		
	case 1:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 2:
		printf("\n\n\tNumber of Days=28 and 29 in leap year");
		break;
		
	case 3:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 4:
		printf("\n\n\tNumber of Days=30");
		break;
		
	case 5:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 6:
    	printf("\n\n\tNumber of Days=30");
		break;
		
	case 7:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 8:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 9:
		printf("\n\n\tNumber of Days=30");
		break;
		
	case 10:
		printf("\n\n\tNumber of Days=31");
		break;
		
	case 11:
		printf("\n\n\tNumber of Days=30");
		break;
		
	case 12:
		printf("\n\n\tNumber of Days=31");
		break;
		
		
	default:
		printf("\n\n\t Invalid Number of Month");
		break;
	}
	
}
