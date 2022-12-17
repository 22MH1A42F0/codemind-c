#include<stdio.h>
int main()
{
    int a,i,s,r,n;
    scanf("%d%d%d",&a,&r,&n);
    n==a;
    for(i=1;i<=r;i++)
    {
        s=a*i;
        printf("%d x %d = %d
",a,i,s);
    }
}