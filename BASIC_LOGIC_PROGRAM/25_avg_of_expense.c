/*25.Accept 5 expense from user and find average of expense*/

#include<stdio.h>
main()
{
	int e1,e2,e3,e4,e5,t,exp;
	
	printf("Enter expense 1=");
	scanf("%d",&e1);
	
	printf("Enter expense 2=");
	scanf("%d",&e2);
	
	printf("Enter expense 3=");
	scanf("%d",&e3);

	printf("Enter expense 4=");
	scanf("%d",&e4);

	printf("Enter expense 5=");
	scanf("%d",&e5);
	
	t=e1+e2+e3+e4+e5;
	exp=t/5;
	
	printf("\n\n\n\tAverage of Expense=%d",exp);
	
}
