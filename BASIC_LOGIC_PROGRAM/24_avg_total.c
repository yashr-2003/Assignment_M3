/*24.Accept 5 employees name and salary and count average and total 
salary */

#include<stdio.h>

main()
{
	char a[6],b[6],c[6],d[6],e[6];
	int  f,i,j,k,l,m,avg,t;
	
	printf("Enetr the 1st Name=");
	scanf("%s",&a);
	
	printf("\nEnetr the 2nd Name=");
	scanf("%s",&b);
	
	printf("\nEnetr the 3th Name=");
	scanf("%s",&c);
	
	printf("\nEnetr the 4th Name=");
	scanf("%s",&d);
	
	printf("\nEnetr the 5th Name=");
	scanf("%s",&e);
	
	printf("\nEnter 1st salary=");
	scanf("%d",&f);
	
	printf("\nEnter 2nd salary=");
	scanf("%d",&i);
	
	printf("\nEnter 3rd salary=");
	scanf("%d",&j);
	
	printf("\nEnter 4th salary=");
	scanf("%d",&k);
	
	printf("\nEnter 5th salary=");
	scanf("%d",&l);
	
	t=f+i+j+k+l+m;
	avg=t/5;
		
		printf("\n\n\n\tAverage=%d",avg);
		printf("\n\ttotal salary=%d",t);
}
