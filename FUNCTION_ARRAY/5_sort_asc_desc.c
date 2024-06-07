/*5. WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice*/

#include<stdio.h>
main()
{
	int arr[20],i,n,temp=0,j,a,d;
	char choice;
		printf("\n\t Enter the size of array=");
		scanf("%d",&n);
		
	for(i=0;i<n;i++)
	{
		printf("\n\t Enter element arr[%d]=",i);
		scanf("%d",&arr[i]);	
	}
	
	
	printf("\n\n------------------------------------");
			
	for(i=0;i<n;i++)
	
	{
		printf("\narr[%d]=%d",i,arr[i]);
	}	
	printf("\n\nEnter your choice=");
	scanf(" %c",&choice);
	if(choice=='a')
	{
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
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
	
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);
	}
	}
	else if(choice=='d')
	{
		
	for(i=0;i<n;i++)
	{
		for(j=i+1
		;j<n;j++)
		{
		
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;	
			}
		}
	}
	
	
	printf("\n\n--------disceding-order------------------------");
	
	for(i=0;i<n;i++)
	{
		printf("\n arr[%d]=%d",i,arr[i]);
	}
	}
	
	
	
	
} 
