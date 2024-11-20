#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=7;i>=1;i--)
{
for(j=i;j<=7;j++){
printf("%d ",j%2);
}
printf("\n");

}
getch();
}