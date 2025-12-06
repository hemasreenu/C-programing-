#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
fp=fopen("file 1.txt","w");
clrscr();
if(fp==NULL)
{
printf("error in the statement");
return 1;
}
else
{
printf("file created");
return 0;
}
getch();
}