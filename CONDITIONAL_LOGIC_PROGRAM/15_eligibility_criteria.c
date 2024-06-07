/*15. Write a C program to determine eligibility for admission to a 
professional course based on the following criteria*/

#include<stdio.h>
main()
{
	int m,p,c,t,mp;
	
	printf("Enter your maths Marks=");
	scanf("%d",&m);
	
	printf("Enter your physics Marks=");
	scanf("%d",&p);
	
	printf("Enter your chemistry Marks=");
	scanf("%d",&c);
	
	t=m+p+c;
	mp=m+p;
	
	printf("\n\n\tYour total marks is=190 to %d",t);
	printf("\n\n\tyour maths and physics's total is=140 to %d",mp);
	
	if(m<65 || p<55 || c<50)
		printf("\n\n\t Candidate is not eligible");
		
	else if(t<190 || mp<140)
		printf("\n\n\t Candidate is not eligible");
		
	else
		printf("\n\n\tCandidate is eligible");
		
		
} 
