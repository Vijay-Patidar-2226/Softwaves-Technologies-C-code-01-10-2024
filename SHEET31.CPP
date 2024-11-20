#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=1;i<=8;i++)
{
  if(i%2==0){
  printf("  ");
  }
for(j=1;j<=11;j++){
printf("* ");

}
printf("\n");

}
getch();
}