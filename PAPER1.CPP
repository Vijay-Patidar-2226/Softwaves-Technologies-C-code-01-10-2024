#include<conio.h>
#include<stdio.h>
void main(){
int x=11;
int y=6;
clrscr();
int z;
z=y++ + x++;
printf("%d\n",z);
z=++x + y++;
printf("%d\n",z);
z=y++ + ++x;
printf("%d\n",z);
getch();

}



