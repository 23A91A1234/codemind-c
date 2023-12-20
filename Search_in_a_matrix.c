#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,a,count=0;
    int mat[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a==mat[i][j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
}