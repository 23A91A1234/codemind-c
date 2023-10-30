#include<stdio.h>
int main()
{
    int i=1,x,y;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        printf("%d x %d = %d
",x,i,x*i);
    }
}