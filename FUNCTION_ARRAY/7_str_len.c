//7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
#include<string.h>
main()
{
	char str[7],len=0;
	printf("enter the string=");
	scanf("%s",&str);
	
	len=strlen(str);
	printf("length=%d",len);
}
