#include<stdio.h>
int armstrong(int);
int armstrong(int number)
{
    int r,d,n;
    int sum=0;
    int power=0;
    while(n!=0)
    {
       r=number%10;
       sum=sum+(int)(power(r,d)+0.5);
       n=n/10;
    }
    if(n==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    int main()
    {

        int number,i;
        scanf("%d",&number);
        for(i=1;i<=number;i++)
        {
            if(armstrong(i))
            {
                printf("%d",i);
            }
        }
    }
}
