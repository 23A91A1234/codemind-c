#include<stdio.h>
int main()
{
    int n,a,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        count++;
        if(arr[i]==a)
        {
            printf("True");
            break;
        }
        else if(count==n)
        {
           printf("False"); 
        }
        
    }
}