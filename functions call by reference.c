#include<stdio.h>
#include<stdlib.h>
int swap(int *num1,int *num2)
{
int temp;
temp=*num1;
*num1=*num2;
*num2=temp;
} 
void main()
{
int a,b;
a=12,b=21;
printf("before swap a:%d,b:%d\n",a,b);
swap(&a,&b);
printf("after swap  a:%d,b:%d\n",a,b);
}