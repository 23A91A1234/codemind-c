#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=65;j<=64+n;j++)
        {
            printf("%c ",j);
        }
        printf("
");
    }
}