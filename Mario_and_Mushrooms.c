#include<stdio.h>
int main()
{
    int s,n,h,x;
    scanf("%d",&x);
    if(x%3==0)
    {
        printf("NORMAL");
    }
    if(x%3==1)
    {
        printf("HUGE");
    }
    if(x%3==2)
    {
        printf("SMALL");
    }
}