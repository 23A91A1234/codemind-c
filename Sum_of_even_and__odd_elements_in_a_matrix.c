#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,full=0;
    scanf("%d%d",&n,&m);
    int mat[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(mat[i][j]%2==0)
            {
                sum+=mat[i][j];
            }
            else
            {
                full+=mat[i][j];
            }
        }
    }
    printf("%d %d",sum,full);
}