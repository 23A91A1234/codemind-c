#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%.2f",(float)(y-x)/x*100);
}