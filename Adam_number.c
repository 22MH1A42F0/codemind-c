#include<stdio.h>
int main()
{
    int n,r,s=0,t,z,c=0,a,b;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    a=s*s;
    b=t*t;
    while(a!=0)
    {
        z=a%10;
        c=c*10+z;
        a=a/10;
    }
    if(b==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    
}