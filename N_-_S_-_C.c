#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a+1;b>i;i++)
    {
        printf("%d %d %d
",i,i*i,i*i*i);
    }
}