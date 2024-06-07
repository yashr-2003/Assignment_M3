//4. WAP to find factorial using recursion


#include<stdio.h>

int fact(int);
main()
{
	int a,ans;
	printf("Enter the Number=");
	scanf("%d",&a);
	ans=fact(a);
	printf("factorial=%d",ans);
}
int fact(int a)
{
	if(a==0)
		return 1;
	
	else
		return a*(fact(a-1));
}
 
