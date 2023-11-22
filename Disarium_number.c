#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,x,p,rev=0,count=1,sum=0,u;
    scanf("%d",&n);
    p=n;
   while(n>0)
   {
       r=n%10;
       rev=rev*10+r;
       n=n/10;
    }
    while(rev>0)
    {
        x=rev%10;
        u=pow(x,count);
        sum+=u;
        count++;
        rev=rev/10;
    }
    if(p==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
   
    
}