#include<stdio.h>
int main()
{
int i,n,flag;
scanf("%d",&n);
i=n;
flag=0;
while(i<=n)
    {
        if(i%2==0)
        {
            if(flag==0)
            {
                printf("%d",i);
                flag=1;
                }
                else
                    {
                        printf(",%d",i);
                        }
                        i++;
                        }
                        }
                        }
