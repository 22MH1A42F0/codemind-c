#include<stdio.h>
int main()
{
    int t,n,a,b,k,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        c=(n/a)+(n/b);
        if(c>k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}