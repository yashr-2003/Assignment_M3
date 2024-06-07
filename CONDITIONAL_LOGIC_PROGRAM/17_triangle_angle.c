/*17. Write a C program to check whether a triangle can be formed with the given 
values for the angles.*/

#include<stdio.h>

main()
{
	int a,b,c,t;
	
	printf("Enter value of 1st angle=");
	scanf("%d",&a);
	
	printf("Enter value of 2nd angle=");
	scanf("%d",&b);
	
	printf("Enter value of 3rd angle=");
	scanf("%d",&c);
	
	t=a+b+c;
	
		printf("\n\n\tTotal of angle is=%d",t);
	
	if(t==180)
		printf("\n\n\tTriangle can be Formed");
		
	else
		printf("\n\n\tTriangle can Not be Formed");
}
