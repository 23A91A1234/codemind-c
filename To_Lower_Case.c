#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    for( int i=0;str[i]!=NULL;i++)
    {
        printf("%c",tolower(str[i]));
    }
}