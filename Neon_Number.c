#include<stdio.h>
int main()
{
    int x,s,r,sum=0;
    scanf("%d",&x);
    s=x*x;
    while(s>0)
    {
        r=s%10;
        sum+=r;
        s=s/10;
    }
    if(x==sum)
    {
        printf("Neon Number");
        }
    else
    {
        printf("Not Neon Number");
    }
    
}