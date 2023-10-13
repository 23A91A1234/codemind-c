#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%.2f",(float)(x-y)/x*100);
}