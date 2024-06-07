//10. WAP to check whether a number is negative, positive or zero. 

#include<stdio.h>

int main()
{
    int N;
    
    printf("\n\n\tEnter the Number=");
    scanf("%d",&N);
    
    if(N==0)
        printf("\n\n\tNumber is Zero");

    else if(N<0)
        printf("\n\n\tNumber is Negative");
        
    else if(N>0 && N<999999)
        printf("\n\n\tNumber is Positive");
        
    else
        printf("\n\n\tInvalid character");

}

