#include<stdio.h>
int main()
{
	int w,b,c,d;
	scanf("%d%d%d%d", &w, &b, &c, &d);
	printf("%s",(w==d||w==b||w==c||w==c+b||w==c+d||w==b+d||w==b+c+d)?("YES"):("NO"));
}