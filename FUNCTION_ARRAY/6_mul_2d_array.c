/*6. WAP to make multiplication of two matrix using 2-D Array*/

#include<stdio.h>
main()
{
	int r,c,k,m1[3][3],m2[3][3],mul[3][3];
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter M1[%d][%d]=",r,c);
			scanf("%d",&m1[r][c]);
		}
	}	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("Enter M2[%d][%d]=",r,c);
			scanf("%d",&m2[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m1[r][c]);
			
		}
		printf("\n");
	}
	

	printf("\n\n");
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",m2[r][c]);
			
		}
		printf("\n");
		
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			mul[r][c]=0;
			for(k=0;k<3;k++)
			{
				mul[r][c]=mul[r][c]+(m1[r][k]*m2[k][c]);
			}
		}
		printf("\n");
	}
	
	printf("\n___________multiplication________\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d",mul[r][c]);
		}
		printf("\n");
	}
	
	
}
