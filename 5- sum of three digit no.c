#include<stdio.h>
int main()
{
    int x = 123,sum,a,b;
     a = x%10;
     x = x/10;
     b = x%10;
     x = x/10;
     sum = (x+a+b);
     printf("sum of three digit no is %d",sum);
     return 0;

}
