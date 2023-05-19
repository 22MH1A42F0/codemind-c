#include<stdio.h>
int main()
{
    int n,sq,a,s=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq>0)
    {
        a=sq%10;
        s=s+a;
        sq=sq/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}