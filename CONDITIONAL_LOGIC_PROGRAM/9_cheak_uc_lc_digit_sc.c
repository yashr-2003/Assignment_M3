/*9. C Program to Check Uppercase or Lowercase or Digit or Special 
Character */

#include<stdio.h>

main()
{
   int a;
   printf("enter a character:");
   scanf("%d",&a);
   
   if(a>=65&&a<=90)
      printf("Upper Case");
      
   else if(a>=97&&a<=122)
      printf("Lower Case");
      
   else if(a>=48&&a<=57)
      printf("digit");
      
   else
      printf("Special character");
}
