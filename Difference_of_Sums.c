#include<stdio.h>
int main()
{
    int i,sum=0,s=0,c,n,sq,diff;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    c=sum*sum;
    for(i=1;i<=n;i++)
    {
         sq=i*i;
         s=sq+s;
    }
    diff=c-s;
    printf("%d",diff);
}