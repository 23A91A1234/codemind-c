#include<stdio.h>
int main()
{
    float a,b,c,d,e,x;
    scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &x);
    x=(a+b+c+d+e)/500*100;
    if(x>=90)
    {
        printf("Grade A");
    }
    if(x>=80 && x<=90)
    {
      printf("Grade B");  
    }
    if(x>=70 && x<=80)
    {
      printf("Grade C");  
    }
    if(x>=60 && x<=70)
    {
      printf("Grade D");  
    }
    if(x>=40 && x<=60)
    {
      printf("Grade E");  
    }
    else if(x<=40)
    {
        printf("Grade F");
    }
}