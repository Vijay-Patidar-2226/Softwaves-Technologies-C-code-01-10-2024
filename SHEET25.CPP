#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,c=1;
clrscr();

for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++){
printf("%d ",c);
c++;
}
printf("\n");

}
getch();
}