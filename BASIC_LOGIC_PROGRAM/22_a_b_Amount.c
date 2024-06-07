/*22. Calculate compound interest (Compound Interest formula: 
a. Formula to calculate compound interest annually is given by: 
Amount= P(1 + R/100)t 
b. Compound Interest = Amount – P */

#include<stdio.h>

main()
{
	float p,r,t=2,a,b,c,CI;
	
	printf("\n\n\tEnter value of p=");
	scanf("%f",&p);
	
	printf("\n\n\tEnter value of r=");
	scanf("%f",&r);
	
	
	a=r/100;
	b=p*(1+a);
	c=b*b*b;  //t=3
	
	printf("\n\n\tAmount=%f",c);
	
	CI=c-p;
	
	printf("\n\n\tcompound Intrest=%f",CI);
    
    
}
