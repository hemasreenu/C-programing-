#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
clrscr();
for(i=1;i<=10;sum=sum+i,i++);
printf("sum:%d ",sum);
getch();
}