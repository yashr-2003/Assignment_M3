//3. WAP to take 10 no. Input from user find out below values.

#include<stdio.h>
main()
{
 int a,sum_e=0,sum_o=0,i=0,s=0;
 
		a=1;
		while(a<=10)
		{
			if(a%2==0)
			{
				sum_e=sum_e+a;
				i=i+1;
			}
			else
			{
				sum_o=sum_o+a;
				s=s+1;
			}
		a++;
		}
				printf("\n\n\tEven Numbers are=");
				printf("%d",i);
				
				printf("\n\n\todd Numbers are=");
				printf("%d",s);
				
				printf("\n\n\tsum of Even Numbers are=");
				printf("%d",sum_e);
				
				printf("\n\n\tsum of Odd Numbers are=");
				printf("%d",sum_o);
	
	
		
		
		
	
} 
