/*8. WAP to accept the height of a person in centimeters and
 categorize the person according to their height. */

#include<stdio.h>

main()
{
	float h1;
	
	printf("\n\n\tEnter your height in cm=");
	scanf("%f",&h1);
	
	if(h1<120)
		printf("\n\n\t your height is too sort");

	else if(h1>=120 && h1<130)
		printf("\n\n\t your height is sort");
		
	else if(h1>=130 && h1<150)
		printf("\n\n\t your height is medium");
		
	else if(h1>=150 && h1<170)
		printf("\n\n\t your height is long");
		
	else 
		printf("\n\n\theight is too long");
		
		
}
