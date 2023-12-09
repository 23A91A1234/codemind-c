#include<stdio.h>
int main()
{
    int n,rs,sur,total_bill;
    scanf("%d",&n);
    if(n<=199)
    {
        rs=n*1.20;
    }
    else if(n>=200&&n<400)
    {
        rs=n*1.50;
    }
    else if(n>=400&&n<600)
    {
        rs=n*1.80;
    }
    else if(n>=600)
    {
        rs=n*2.00;
    }
    if(rs>400)
    {
        sur=rs*0.15;
    }
    else
    {
        sur=100;
    }
    total_bill=rs+sur;
    printf("%.2f",(float)total_bill);
}