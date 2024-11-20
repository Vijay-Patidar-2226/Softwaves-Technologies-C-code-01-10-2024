#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int a=0;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",a);

if(a<2)
{
a++;

}
    else
    {
    a=0;
    }
    }
printf("\n");
}
getch();
}