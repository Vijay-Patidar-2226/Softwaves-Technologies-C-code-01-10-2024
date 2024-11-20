#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=1;i<=11;i++)
{

for(j=1;j<=11;j++){
if(i==1 || i==11 || j==1 || j==11 || i+j==7
 || j-i==5 || i-j==5 || i+j==17 || i==j || i+j==12)
 {
printf("*");
printf(" ");

}
else
{
printf("  ");
}
}

printf("\n");

}
getch();
}