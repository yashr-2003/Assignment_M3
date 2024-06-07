/*1. Write a program to find out the max number from given array 
using function*/


#include<stdio.h>
int max();
main()
{
	int ans;
	ans=max();
	printf("\n\t Max array=%d",ans);
}
int max()
{
	int arr[5],i,temp=0;
	for(i=0;i<5;i++)
	{
		printf("Enter arr[%d]=",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\narr=%d",arr[i]);
	}		
	for(i=0;i<5;i++)
	{
		if(temp<arr[i])
			temp=arr[i];
	}
		return temp;

	
}


