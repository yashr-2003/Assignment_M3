//20. WAP program to print below output using for loop 

#include<stdio.h>
main()
{
	int r,c,a=1;

	for(r=0;r<10;r++)
	{
		for(c=0;c<10;c++)
		{
			printf("\t0%d",a);
			a++;
		}
		printf("\n");
		
	}
}

