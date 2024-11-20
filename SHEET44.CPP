#include<conio.h>
#include<stdio.h>
void main()
{
int i,j;
int k;
clrscr();

for(i=5;i>=1;i--){
for(k=1;k<=i;k++){
printf(" ");
 }

for(j=5;j>i;j--){
printf("%d",j);

}

for(j=i;j<=5;j++){
printf("%d",j);

}

printf("\n");
}
getch();
}