#include<stdio.h>
int main()
{
    int l,n,m,k,a,b,c;
    scanf("%d",&l);
    scanf("%d%d%d",&n,&m,&k);
    if(m-k>=n)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
"); 
    }
    scanf("%d%d%d",&a,&b,&c);
    if(b-c>=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    
}