#include<stdio.h>
int main()
{
int a,b,i,gcd;
gcd=0;
scanf("%d%d",&a,&b);
for(i=1;i<=(a<b?a:b);i++)
{
 if(a%i==0 && b%i==0)
 {
    gcd=i;
 }
}
printf("%d",gcd);
}


