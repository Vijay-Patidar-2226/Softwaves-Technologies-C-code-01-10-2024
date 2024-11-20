#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k;
clrscr();

for(i=1;i<=10;i=i+2){
for(k=i;k<=10;k=k+2){
      printf(" ");
      }
for(j=1;j<=i;j++){
printf("%d",j);
}

printf("\n");
}
getch();
}