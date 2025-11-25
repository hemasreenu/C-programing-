#include<stdio.h>

int main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if(a>0)
       printf("a is positive");
    else if (a<0) 
       printf("a is negative");
    else
       printf ("zero"); 
       
    
    return 0;
}