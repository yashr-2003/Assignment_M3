//3. WAP to find reverse of string using recursion.


#include<stdio.h>
#include<string.h>

char rev(char[]);

main() 
{
	char a[20],ans[20];
	printf("Enter the string=");
	scanf("%s",&a);
	ans[20]=rev(a);
	printf("%s",ans);
}
char rev(char a[20])
{
	return strrev(a);
} 

