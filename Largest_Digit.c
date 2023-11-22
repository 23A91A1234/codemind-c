#include<stdio.h>
int main()
{
	int n,r,t=0,p;
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
	    t=(r>t)?(r):(t);
		n=n/10;
	}
	printf("%d",t);
}