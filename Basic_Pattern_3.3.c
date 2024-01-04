#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;n>=i;n--)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}