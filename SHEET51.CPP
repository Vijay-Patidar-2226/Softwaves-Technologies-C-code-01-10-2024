#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k=0,m;
clrscr();

for(i=1;i<=18;i=i+2)

{
i<=9?k++:k--;
for(m=k;m<=9;m++){
printf(" ");
 }
 for(j=1;j<=2*k-1;j++){
printf("*");
}


printf("\n");
}
getch();
}