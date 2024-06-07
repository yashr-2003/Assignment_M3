//1. Write a program to find out the max number from given array using function

#include<stdio.h>
main()

{
	int arr[10],i,max;
	
	for(i=0;i<10;i++)
	{
		printf("\n\t Enter arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("\narr[%d]=%d",i,arr[i]);
	}
	
	max=arr[0];
	
	for(i=0;i<10;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	printf("\n\t max=%d",max);
}
