#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a=-1;
int  b=1,c;
clrscr();
for(i=1;i<=5;i++)
{
for(j=i;j<=5;j++){
c=a+b;
printf("%d ",c);
a=b;
b=c;
}
printf("\n");

}
getch();
}