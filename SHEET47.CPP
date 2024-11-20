#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k;
clrscr();

for(i=5;i>=1;i--){
  for(k=i;k<=5;k++){
printf(" ");
}
 for(j=i;j<=i*2-1;j++){
printf("%d",j);
}
 for(j=2*i-2;j>=i;j--){
printf("%d",j);



}
printf("\n");
}
getch();
}