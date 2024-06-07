/*4. WAP to make simple calculator (operation include Addition, 
Subtraction, Multiplication, Division, modulo) using conditional 
statement */
#include<stdio.h>

main()
{
	int a,b,d,c;
	
	printf("\n\n\t.......Basic Arithmetics...........");
		
	printf("\n\n\t1.Addition");
	printf("\n\t2.subtraction");
	printf("\n\t3.multiplication");
	printf("\n\t4.divison");
	printf("\n\t5.modulo");
	printf("\n\t6.exit");
	

	
	
	
	printf("\n\n\tSelect the operation=");
	scanf("%d",&c);
	
	if(c==6)
    	exit(0);
	
	printf("...................................................");
	
	printf("\n\n\tEnter Number 1=");
	scanf("%d",&a);
	
	printf("\n\n\tEnter Number 2=");
	scanf("%d",&b);

	printf("....................................................");
	
	if(c==1)
	{
		d=a+b;
		printf("\n\n\tAddition=%d",d);
    }
   
	else if(c==2)
	{
		d=a-b;
		printf("\n\n\tsubtraction=%d",d);
    }
    
	else if(c==3)
	{
		d=a*b;
		printf("\n\n\tmultiplication=%d",d);
    }
    
	else if(c==4)
	{
		d=a/b;
		printf("\n\n\tdivison=%d",d);
    }
    
	else if(c==5)
	{
		d=a%b;
		printf("\n\n\tmodulo=%d",d);
    }
    

	
	else
	{
		printf("\n\n\tEnvalid number");
	}
}
