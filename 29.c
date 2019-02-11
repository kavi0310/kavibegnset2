#include<stdio.h>
int main()
{
int a,b,t,n,s,r;
scanf("%d%d",&a,&b);
for(n=a;n<=b;n++)
{
t=n;
s=0;
while(t!=0)
{
r=t%10;
s=s+r*r*r;
t=t/10;
}
if(s==n)
{
printf("%d\t",n);
}
}
return 0;
}
