//14. Perform 2D matrix array

#include<stdio.h>
main()
{
	int a[2][2],r,c;
	
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter the element=");
			scanf("%d",&a[r][c]);
		}
	}
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d",a[r][c]);
		}
		printf("\n");
		
	}
	
	
}
