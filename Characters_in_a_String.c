#include<stdio.h>
#include<string.h>
int main()
{
    int count=0;
    char str[100];
    scanf("%[^
]s",&str);
    for( int i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    printf("%d",count);
}