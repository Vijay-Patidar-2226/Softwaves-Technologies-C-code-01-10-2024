#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
clrscr();
for(i=1;i<=5;i++)
{
for(j=5;j>=1;j--){
if(i>=j)
{
printf("%d ",i);

}
else{
printf("%d ",j);
}
}
printf("\n");
}

getch();
}