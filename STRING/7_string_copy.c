/* 7. Write a program in C to copy one string to 
another string.*/ 
#include<stdio.h>
main()
{
	char a[20],b[20];
	int i;
	
	printf("Enter the string=");
	scanf("%s",&a);
	printf("\n\ta=%s",a);
	
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("\n\tb=%s",b);
}
