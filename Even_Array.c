#include<stdio.h>
int main()
{
    int n,t=0,count=0,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count++;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            t++;
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