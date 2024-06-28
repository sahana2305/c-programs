#include<stdio.h>
void print(int p[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d",p[i]);
    }
}
void reverse(int p[],int n)
{
    int i,j,temp;
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;
        i++;
        j--;
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    reverse(a,n);
    print(a,n);
}


