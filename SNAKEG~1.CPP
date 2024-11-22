#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void snake();
void food();
void set();
int x[100][4]={
{100,100,110,110},
{90,100,100,110},
{80,100,90,110}
};
int n=3;
int ch,r1,r2;
void main()
{
int a=DETECT;
int b;
clrscr();
r1=50+random(450);
r2=50+random(350);
initgraph(&a,&b,"");
do
{
snake();
ch=getch();
}while(ch!=97);
getch();
}

void snake()
{
while(kbhit()==0){
food();
int i;
for(i=0;i<n;i++){
rectangle(x[i][0],x[i][1],x[i][2],x[i][3]);
}

if(ch==77){
set();
x[0][0]+=10;
x[0][2]+=10;
}
if(ch==75){
set();
x[0][0]-=10;
x[0][2]-=10;

}


if(ch==72){
set();
x[0][1]-=10;
x[0][3]-=10;

}

if(ch==80){
set();
x[0][1]+=10;
x[0][3]+=10;

}
if(x[0][0]==r1 && x[0][1]==r2){
n++;
r1=50+random(450);
r2=50+random(350);
}
delay(100);
cleardevice();
 }
}

void set(){
int i;
for(i=n-1;i>0;i--){
x[i][0]=x[i-1][0];
x[i][1]=x[i-1][1] ;
x[i][2]=x[i-1][2]  ;
x[i][3]=x[i-1][3]   ;
}
}

void food()
{
r1=r1-r1%10;
r2=r2-r2%10;
rectangle(r1,r2,r1+10,r2+10);
}









