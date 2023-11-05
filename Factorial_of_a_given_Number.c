#include<stdio.h>
int main()
{
    int n,mul=1,i;
    scanf("%d",&n);
    for(i=1;n>=i;n--)
    {
    	
       mul*=n;
    }
    printf("%d ",mul);
   
}
