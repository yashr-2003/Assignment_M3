/*11. WAP to accept 5 numbers from user and display in reverse order using for 
loop and array*/

#include<stdio.h>
main()
{
	int arr[5],r,j,rem,temp=0;
	
	for(r=0;r<5;r++)
	{
		printf("\nEnter the Elements arr[%d]=",r);
		scanf("%d",&arr[r]);			
	}		
	for(r=0;r<5;r++)
	{
		printf("\n\tarr[%d]=%d",r,arr[r]);			
	}
	
	
	
	printf("\n__________reverse________________\n");
	
	for(r=4;r>=0;r--)
	{
		printf("\n\t arr[%d]=%d",r,arr[r]);
	}
}
