#include<stdio.h>
int main()
{
    int a,b,p,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(a*i%b==0)
        {
            break;
        }
    }
    printf("%d",(a*b)/(a*i));
}