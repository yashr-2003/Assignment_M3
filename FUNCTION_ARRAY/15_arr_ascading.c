//15. Store 5 numbers in array and sort it in ascending order.

#include<stdio.h>
main()
{
	int arr[5],i,n,temp=0,j;
	
	for(i=0;i<5;i++)
	{
		printf("\n\t Enter element arr[%d]=",i);
		scanf("%d",&arr[i]);	
	}
	
	
	printf("\n\n------------------------------------");
			
	for(i=0;i<5;i++)
	
	{
		printf("\narr[%d]=%d",i,arr[i]);
	}	
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
		
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}
	
	printf("\n\n--------asceding-order------------------------");
	
	for(i=0;i<5;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);
	}
	
}
