//14.WAP to find the largest of three numbers
#include<stdio.h>

main()
{
	int h1,h2,h3;
	
	printf("Enter the Number 1=");
	scanf("%d",&h1);
	
	printf("Enter the Number 2=");
	scanf("%d",&h2);
	
	printf("Enter the Number 3=");
	scanf("%d",&h2);
	
	if(h1>h2 && h1>h3)
		printf("the largest Number is h1=%d",h1);
	
	else if(h2>h1 && h2>h3)
		printf("the largest Number is h2=%d",h2);
		
	else if(h3>h1 && h3>h2)
		printf("the largest Number is h3=%d",h3);
		
	else
		printf("Numbers are same ");
}


