//18. Write a C program to calculate profit and loss on a transaction. 

#include<stdio.h>
main()
{
	int a,b;

	printf("Enter the buying price=");
	scanf("%d",&a);
	
	printf("Enter the selling price=");
	scanf("%d",&b);
	
	if(a>b)
		printf("\n\n\tyour are in loss of=%d",a-b);
		
	else if(b>a)
		printf("\n\n\tyou have profit of=%d",b-a);
		
	else
		printf("\n\n\t you are not in or not in loss");
	
}
