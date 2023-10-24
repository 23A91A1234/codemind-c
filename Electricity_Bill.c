#include<stdio.h>
int main()
{
    int x;
    float c,b,s,t;
    scanf("%d",&x);
    if(x<=199)
    {
        c=1.20;
    }
    else if(x>200 && x<400)
    {
        c=1.40;
    }
    else if(x>400 && x<600)
    {
        c=1.60;
    }
    else if(x>600 && x<800)
    {
        c=1.80;
    }
    else
    {
        c=2.00;
    }
    b=x*c;
    if(b>400)
    {
        s=b*0.15;
    }
    else
    {
        s=0.00;
    }
    t=b+s;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",x,c,b,s,t);
}