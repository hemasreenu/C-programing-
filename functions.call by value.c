#include<stdio.h>
#include<stdlib.h>
int max(int num1,int num2)
{
int result;
if(num1>num2)
result=num1;
else
result=num2;
return result;
}
void main()
{
int a,b,result;
a=45,b=63;
result =max(a,b);
printf("the result is: max(45,63)=%d",result);
}