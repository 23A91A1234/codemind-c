#include<stdio.h>
int main()
{
    int n,i,t,sum=0;
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
        if(arr[i]==t)
        {
            printf("True");
            break;
            
        }
        else if(i==n-1)
        {
            printf("False");
        }
    }
}