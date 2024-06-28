#include<stdio.h>
int main()
{
int n,r,sum,count;
scanf("%d",&n);
count=0;
while(n!=0)
{
n=n/10;
count++;
printf("no. of digits=%d",count);
}
}
