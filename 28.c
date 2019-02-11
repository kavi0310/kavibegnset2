#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,t,t1,r,c,s=0,l=0;
clrscr();
scanf("%d",&n);
t=n;
t1=n;
while(n)
{
n=n/10;
l++;
}
while(t)
{
c=1;
r=t%10;
for(i=0;i<l;i++)
{
c=c*r;
}
s=s+c;
t=t/10;
}
if(s==t1)
printf("yes");
else
printf("no");
getch();
}


