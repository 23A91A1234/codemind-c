#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0,add=0,p,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=i*i;
        add+=i;
    }
    p=pow(add,2);
    t=abs(sum-p);
    printf("%d",t);
    
}