//7. Accept marks from user and check pass or fail 

#include<stdio.h>
main()
{
	int s1, s2, s3, s4, s5, total=0;
	
	printf("\n\n\t Input Marks for Subject-1 : ");
	scanf("%d",&s1);
	printf("\n\n\t Input Marks for Subject-2 : ");
	scanf("%d",&s2);
	printf("\n\n\t Input Marks for Subject-3 : ");
	scanf("%d",&s3);
	printf("\n\n\t Input Marks for Subject-4 : ");
	scanf("%d",&s4);
	printf("\n\n\t Input Marks for Subject-5 : ");
	scanf("%d",&s5);
	
	total=s1+s2+s3+s4+s5;

	
	if(s1<40)
		printf("\n\n\t student is Fail");
		
	else if(s2<40)
		printf("\n\n\t student is Fail");
	
	else if(s3<40)
		printf("\n\n\t student is Fail");
	
	else if(s4<40)
		printf("\n\n\t student is Fail");
	
	else 
		printf("\n\n\t student is pass");
}
