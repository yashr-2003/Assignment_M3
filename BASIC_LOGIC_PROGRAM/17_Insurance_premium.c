/*17. Calculate person’s insurance premium based on salary */

#include<stdio.h>

main()

{
	int a,A,b;
	
	printf("Eneter salary=");
	scanf("%d",&a);
	
	printf("Eneter premium=");
	scanf("%d",&A);
	
	b=a*A/100;
	
	printf("insurance premium=%d",b);
	
	
}
