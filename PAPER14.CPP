
#include<conio.h>
#include<stdio.h>
void main(){
int a=6;
int b=12;
clrscr();

a=a++ + a++ + a++;
printf("%d\n",a);
a=++a + a++ + ++a;
printf("%d\n",a);
b=b++ + ++b + a++;
 printf("%d\n",b);

 getch();
 }