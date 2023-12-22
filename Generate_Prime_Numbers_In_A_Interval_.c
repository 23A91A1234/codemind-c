#include<stdio.h>
int main()
{
    int n,m,count,i,j;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d
",i);
        }
    }
}