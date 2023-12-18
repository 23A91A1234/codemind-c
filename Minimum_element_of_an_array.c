#include<stdio.h>
int main()
{
    int n,i,d;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    d=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<d)
        {
            d=arr[i];
        }
        
    }
    printf("%d",d);
}