#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int k;
clrscr();

for(i=5;i>=1;i--){
    for(k=i;k<=5;k++){
printf(" ");
 }
 for(j=1;j<=i*2-1;j++){
printf("%d",i);
}
printf("\n");
}
getch();
}