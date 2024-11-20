#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();

for(i=1;i<=5;i++){
for(j=1;j<=5;j++){
if(i==3 || j==3){
printf("3 ");
}
else{
if(i==2 || j==4 || j==2 || j==4){
printf("2 ");
}
else
{
printf("1 ");
      }
}
}
printf("\n");

}

getch();
}