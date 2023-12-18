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
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            d=arr[i];
        }
    }
    printf("%d",d);

}