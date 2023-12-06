#include<stdio.h>
int main()
{
    int n,i,t=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            t++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0&&arr[i]%2==0)
        {
            count++;
        }
    }
    if(t==count)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}