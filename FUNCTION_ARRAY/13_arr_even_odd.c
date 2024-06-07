/*13. WAP to accept 5 numbers from user and check entered number is even or odd 
using of array*/

#include<stdio.h>
main()
{
	int arr[5],i;
	
	for(i=0;i<5;i++)
	{
		printf("\n Enter Number=");
		scanf("%d",&arr[i]);	
	}	
	for(i=0;i<5;i++)
	{
		printf("\n\tarr[%d]=%d",i,arr[i]);	
	}
	
	printf("\n____________even number____________\n");
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
			printf("\narr[%d]=%d",i,arr[i]);
	}
	
	printf("\n____________odd number____________\n");
	
	for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
			printf("\narr[%d]=%d",i,arr[i]);
	}
} 

