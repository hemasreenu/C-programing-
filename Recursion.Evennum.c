#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=2;
void Evennum(int);
Evennum(i);
}
void Evennum(int i)
{
printf("%d ",i);
i=i+2;
if(i==20)
exit(0);
Evennum(i);
}
getch();