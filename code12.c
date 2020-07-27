#include<stdio.h>
int fun(int x)
{
    if(x==2)
            return 2;
    else
    {
    	if(x%2==0)
        	printf("+");
        else
        	printf("-");
        fun(x-1);
    }
}
int main()
{
    int n,i;
    n=fun(6);
    printf("%d",n);
}

