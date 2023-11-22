#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count++;
        for(j=1;j<=count;j++)
        {
            printf("* ");
        }
        printf("
");
    }
}