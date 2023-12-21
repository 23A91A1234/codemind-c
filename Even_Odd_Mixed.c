#include<stdio.h>
int main()
{
    int n,r,count=0,e=0,o=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        count++;
        if(r%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
        n=n/10;
    }
    if(count==e)
    {
        printf("Even");
    }
    else if(count==o)
    {
        printf("Odd");
    }
    else if(count==e+o)
    {
        printf("Mixed");
    }
}