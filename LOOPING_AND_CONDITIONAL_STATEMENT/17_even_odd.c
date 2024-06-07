/*17. Calculate 5 numbers from user and calculate number of even and 
odd using of while loop*/

#include<stdio.h>
main()
{
	int a,i,e=0,o=0;	
	i=0;
	while(i<5)
	{
	printf("\n\t Enter the number=");
	scanf("%d",&a);	
	if(a%2==0)
			e++;
		else
			o++;
	i++;
	}

	
	printf("\n\tEven number=%d",e);
	
	printf("\n\todd number=%d",o);
		
} 
