#include<stdio.h>
int main()
{
    int n,i,t,count=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    t=sum/n;
    for(i=0;i<n;i++)
    {
        if(t<=arr[i])
        {
           count++; 
        }
    }
    printf("%d",count);
}