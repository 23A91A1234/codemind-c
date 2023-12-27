#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    char s2[100];
    printf("%s",strcpy(s2,str));
}