//10. WAP to perform Palindrome number using for loop and function 

#include<stdio.h>

int pald();
main()
{
	int ans;
	ans=pald();
	if(ans)
		printf("\n\t %d Number is palidrome",ans);
	else 
		printf("\n\t Number is not palidrome");	
}
int pald()
{
	int i=0,a,temp,rem,rev;
		printf("\n\n Enter the Number=");
		scanf("%d",&a);
		temp=a;
		
	for(i=a;a!=0;a=a/10)
	{
		rem=a%10;
		rev=(rev*10)+rem;
	}
	if(rev==temp)
		return rev;
	else
		return 0;
		//printf("\n %d Number is Not palidrome",rev);
		

}
