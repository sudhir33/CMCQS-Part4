#include<stdio.h>
int fun(int x)
{
    int b;
    if(x==1)
        return 1;
    else
        b=x*fun(x-1);
        return b;
}
int main()
{
    int n;
    n=f1(4);
    printf("%d",n);
    return 0;
}

