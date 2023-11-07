#include<stdio.h>
int main()
{
    int x,y,i,r,sum=0,dev=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            sum+=i;
        }
    }
    for(r=1;r<y;r++)
    {
        if(y%r==0)
        {
            dev+=r;
        }
    }
    if(sum==y&&dev==x)
    {
        printf("Amicable");
    }
    else 
    {
        printf("Not Amicable");
    }
}