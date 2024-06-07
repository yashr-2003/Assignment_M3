//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter the Number=");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==n)
			printf("(%d*%d)",i,i);
		else
			printf("(%d*%d)+",i,i);
	}
}
