#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k=0,m;
clrscr();

for(i=1;i<=9;i++)

{
i<=5?k++:k--;
for(m=k;m<=9;m++){
printf(" ");
 }
 for(j=1;j<=2*k-1;j++){
printf("%d",k);
}


printf("\n");
}
getch();
}