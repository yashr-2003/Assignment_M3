//14.Accept 5 numbers from user and find those numbers factorials 

#include<stdio.h>
main()
{
	int a,b,c=1,d,e,f,i=1,j,k,l,m,n,o=1,p=1,q=1;
	
	printf("\n\t Enter the Number=");
	scanf("%d",&a);
	
	printf("\n\t Enter the Number=");
	scanf("%d",&d);
	
	printf("\n\t Enter the Number=");
	scanf("%d",&e);
	
	printf("\n\t Enter the Number=");
	scanf("%d",&f);
	
	printf("\n\t Enter the Number=");
	scanf("%d",&j);
	
	
	b=1;
	while(b<=a)
	{
		c=c*b;
		b++;
	}
	printf("\n\tFactorial of is %d",c);
	
	k=1;
	while(k<=d)
	{
		i=i*k;
		k++;
	}
	printf("\n\tFactorial of is %d",i);
	
	l=1;
	while(l<=e)
	{
		o=o*l;
		l++;
	}
	printf("\n\tFactorial of is %d",o);
	
	m=1;
	while(m<=f)
	{
		p=p*m;
		m++;
	}
	printf("\n\tFactorial of is %d",p);
	
	n=1;
	while(n<=j)
	{
		q=q*n;
		n++;
	}
	printf("\n\tFactorial of is %d",q);
}
