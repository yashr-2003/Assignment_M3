/*2.  Write a C program to read the value of an integer m and 
display the value of m is 1 when m is larger than 0, 0 when m is 0
 and -1 when m is  less than 0. */
 
#include<stdio.h>
 
main()
{
	int m;
	
	printf("Enter the value of m=");
	scanf("%d",&m);
	
	if(m==1)
		printf("\n\n\tm is 1");
		
	if(m==0)
		printf("\n\n\tm is 0");
		
	if(m>0)
		printf("\n\n\tm is greater than 0");
		
	if(m<0)
		printf("\n\n\tm is less than 0");
}
 
