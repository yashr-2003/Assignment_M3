/*33. C Program to Read Integer and Print First Three 
Powers(N^1, N^2, N^3) */

#include<stdio.h>
#include<math.h>
main()
{
	int N,p1,p2,p3;
	
	printf("Enter N=");
	scanf("%d",&N);

	p1=pow(N,1);
	p2=pow(N,2);
	p3=pow(N,3);
	
	printf("%d",p1);
	printf("\n%d",p2);
	printf("\n%d",p3);
}
