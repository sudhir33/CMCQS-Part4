#include<stdio.h>
int fun(int *a,int *b)
{
	int i,res=1;
	for(i=*a;i<*b;i++)
	{
		res=res*i;
	}
	*b=*a;
	return res;
}
int main()
{
	int a=3,b=5;
	a=fun(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
