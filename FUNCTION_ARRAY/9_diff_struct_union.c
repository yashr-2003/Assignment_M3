//9. WAP to show difference between Structure and Union. 

#include<stdio.h>

struct student //use union to see diffrence
{
	int rollno,sage;
	char sname[20],saddress[30];
}e;
main()
{
	printf("Enter rollno=");
	scanf("%d",&e.rollno);
	
	printf("Enter sname=");
	scanf("%s",&e.sname);
	
	printf("Enter saddress=");
	scanf("%s",&e.saddress);
	
	printf("Enter the age=");
	scanf("%d",&e.sage);
	
	printf("\n\trollno=%d",e.rollno);
	printf("\n\tsname=%s",e.sname);
	printf("\n\tsaddress=",e.saddress);
	printf("\n\tsage=%d",e.sage);
}
