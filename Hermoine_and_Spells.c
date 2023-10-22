#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d", &x, &y,&z);
    if(x>z && y>z)
    {
        printf("%d",x+y);
    }
    else if(x>y && z>y)
    {
        printf("%d",x+z);
    }
    else if(y>x && z>x)
    {
        printf("%d",y+z);
    }
}