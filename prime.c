#include<stdio.h>
int main()
{
int i,num,flag;
scanf("%d",&num);
for(i=2,flag=0;i*i<=num;i++)
{
    if(num%i==0)
        flag=1;
}
if(flag==0&&(num!=1))
    printf("%d is a prime number",num);
    else{
        printf("%d is not a prime number",num);
    }
}
