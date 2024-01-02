#include<stdio.h>
#include<ctype.h>
int main()
{
    int i,count=0;
    char str[100];
    scanf("%[^
]s",str);
   for(i=0;str[i]!=NULL;i++)
    {
       if(isupper(str[i]))
       {
           count++;
       }
    }
    printf("%d",count);
}