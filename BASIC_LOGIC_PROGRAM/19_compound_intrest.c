/*19.Calculate compound interest */

#include<stdio.h>

main()
{
	float p,r,t=3,a,b,c;
	
	printf("\n\n\tEnter value of p=");
	scanf("%f",&p);
	
	printf("\n\n\tEnter value of r=");
	scanf("%f",&r);
	
	a=r/100;
	b=p*(1+a);
	c=b*b*b;  //t=3
	
	printf("\n\n\tcompound interest=%f",c);
    
    
}
