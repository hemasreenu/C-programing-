#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=1;
void Oddnum(int);
Oddnum(i);
}
void Oddnum(int i)
{
printf("%d ",i);
i=i+2;
if(i==19)
exit(0);
Oddnum(i);
}
getch();