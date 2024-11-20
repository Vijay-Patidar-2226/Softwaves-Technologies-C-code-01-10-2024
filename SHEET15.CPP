#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(i>=j)
{
printf("%d ",j);
 }

else
{
printf("* ");
}
}
printf("\n");
}
getch();

}
