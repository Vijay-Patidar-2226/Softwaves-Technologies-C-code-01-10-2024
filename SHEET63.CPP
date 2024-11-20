#include<conio.h>
#include<stdio.h>
void main()
{
int i,k,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=i;j<5;j++){
printf(" ");
}
for(k=1;k<=i*1;k++){
if(k==i || k==1){
printf("%d ",i%2);
printf("");
}
else{
printf("2 ") ;
printf("") ;
}
}
printf("\n");
}
getch();
}
