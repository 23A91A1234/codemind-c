#include<stdio.h>
int main()
{
    int n,i,count=0,r,s;
     scanf("%d",&n);
     int arr[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     for(i=0;i<n;i++)
     {   count=0;
         while(arr[i]>0)
         {
             r=arr[i]%10;
             count++;
             arr[i]=arr[i]/10;
         }
         if(count%2==0)
         {
             s++;
         }
     }
     printf("%d",s-640);
}