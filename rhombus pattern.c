#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i++)
    {
        for(j=n;j>1;j--)
        {
            if(i>=j)
            {
                printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
