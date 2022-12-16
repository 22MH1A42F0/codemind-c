#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a>34&&b>34&&c>34&&d>34&&e>34&&f>34)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}