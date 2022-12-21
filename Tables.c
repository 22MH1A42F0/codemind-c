#include<stdio.h>
int main()
{
    int n,a,i,j,c;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            c=a*i;
            printf("%d x %d = %d
",a,i,c);
        }
    }
}