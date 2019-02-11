#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,s=0,t;
clrscr();
scanf("%d",&n);
t=n;
while(n)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(s==t)
printf("yes");
else
printf("no");
getch();
}
