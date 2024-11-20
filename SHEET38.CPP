#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k;
clrscr();

for(i=1;i<=5;i++){

for(j=1;j<=5;j++){

if(i%2==0){
 printf("%d ",(i/2)*j);
}
else{
printf("%d ",i*j);
 }
}
printf("\n");
}
getch();
}