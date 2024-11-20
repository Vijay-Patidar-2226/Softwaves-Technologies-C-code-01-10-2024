#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=1;i<=7;i++)
{
for(j=7;j>=i;j--){
printf("%d ",j%2);
}
printf("\n");

}
getch();
}