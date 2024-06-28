#include<stdio.h>
int main()
{
int i,n,r,sum,temp;
scanf("%d",&n);
for(i=1;i<=n;i++){
temp=i;
sum=0;
while(temp>0)
{
r=temp%10;
sum=sum*10+r;
temp=temp/10;
}
if(sum==i)
{
printf("%d ",i);
}
}
}
