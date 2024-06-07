//11. WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int a;
	
	printf("\n\n\t Enter the Number =");
	scanf("%d",&a);

	a%2==0? printf("\n\n\t %d Number is Even",a):printf("\n\n\t %d Number is odd",a);
	
}
