#include<stdio.h>
int main()
{
int i,n,flag;
scanf("%d",&n);
i=n;
flag=0;
while(i>=1)
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
            i--;
            }
            }
