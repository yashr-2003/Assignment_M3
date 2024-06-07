/*6. WAP to make addition and Subtraction of two matrix using 
2-D Array*/

#include<stdio.h>
main()
{
	int ar[3][3]={1,2,3,4,5,6,7,8,9},arr[3][3]={9,8,7,6,5,4,3,2,1},r,c;

	printf("____________1______________\n");

	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",ar[r][c]);	
		}	
		printf("\n\n");
	}	
	
	
	
	printf("____________2______________\n");
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",arr[r][c]);	
		}	
		printf("\n\n");
	}	
	
	printf("____________addition___________________\n");
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",ar[r][c]+arr[r][c]);	
		}	
		printf("\n\n");
	}	
	
		printf("____________subtraction___________________\n");
	
		for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",ar[r][c]-arr[r][c]);	
		}	
		printf("\n\n");
	}
	


} 
