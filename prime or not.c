#include<stdio.h>
int main()
{
int i,n,count;
scanf("%d",&n);
for(i=1,count=0;i<=n;i++)
{
if(n%i==0)
{
printf("%d",i);
count++;
}
}
if(count==2)
{
printf("\n %d is a prime number",n);
}
else
{
printf("\n %d is not a prime number",n);
}
}
