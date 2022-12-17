#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float c,b,sc,tb;
    if(u<199)
    {
        c=1.20;
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
    }
    else
    {
        c=2.0;
    }
    b=u*c;
    if(b>=400)
    {
        sc=0.15*b;
    }
    tb=sc+b;
    printf("Units Consumed: %d
",u);
    printf("Cost per Unit: %.2f
",c);
    printf("Bill: %.2f
",b);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f ",tb);
    
}