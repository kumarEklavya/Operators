#include<stdio.h>
int main()
{
    int a=10 ,b=5 , t;
    t=a;
    a=b;
    b=t;
    printf("a=%d,b=%d",a,b);
    return 0;
}
