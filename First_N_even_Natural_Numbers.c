#include<stdio.h>
int main()
{
    int n,i,count=0,t;
    scanf("%d",&n);
    t=n*2;
    for(i=1;t>=i;t--)
    {
       if(t%2==0)
       {
            printf("%d ",t);
            count++;
                
        }
        if(count==n)
        {
            break;
        }
        
    }
    

}