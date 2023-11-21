#include<stdio.h>
int main()
{
    int n,r,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(r=1;r<=i;r++)
        {
            printf("*");
        }
        printf("
");
    }
}