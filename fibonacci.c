#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=a+b,count=0;
    while(count<n)
    {
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
        count++;
        
    }
}