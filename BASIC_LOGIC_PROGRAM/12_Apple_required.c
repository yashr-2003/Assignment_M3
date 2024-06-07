/*12. Accept number of students from user. I need to give 5 apples 
to each student. How many apples are required? */

#include<stdio.h>

main()
{
	int num,apple;
	
	printf("\n\n\n\tEnter Number of Student=");
	scanf("%d",&num);
	
	apple=num*5;
	
	printf("\n\n\n\tNumber of apples are Required=%d",apple);
}

