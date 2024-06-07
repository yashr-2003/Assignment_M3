//16.Accept 5 numbers from user and perform sum of array.

#include<stdio.h>
main()
{
	int arr[5],i,sum=0;
	
	for(i=0;i<5;i++)
	{
		printf("Enter arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\narr[%d]=%d",i,arr[i]);
	}
	
		
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	
	printf("\n_______________________________");
	
	printf("\n\t sum of array=%d",sum);
	
	
}
