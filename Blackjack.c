#include<stdio.h>
int main()
{
	int x,y,z;
	scanf("%d%d",&x, &y);
	z=21-(x+y);
	if(z<=10)
	{
	  printf("%d",z);
    }
	 else
	 {
	 	printf("-1");
		}   
}