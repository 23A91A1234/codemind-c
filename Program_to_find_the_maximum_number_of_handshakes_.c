#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>1)
    {
        printf("%d",n*(n-1)/2);
    }
    else
    {
        printf("Consists of 1 integer");
    }
    
}