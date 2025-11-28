#include<stdio.h>
#include<stdlib.h>
void main()
{
int i=1;
void Printnum(int);
Printnum(i);
}
void Printnum(int i)
{
printf("%d ",i);
i++;
if(i==6)
exit(0);
Printnum(i);
}
getch();