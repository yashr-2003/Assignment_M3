//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the Number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==n)
			printf("%d",n);
		else
			printf("%d+",i);
	}
}
