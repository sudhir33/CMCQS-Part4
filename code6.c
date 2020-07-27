#include<stdio.h>
int fun(int *a,int *b)
{
	int i,res=1;
	for(i=*a;i<*b;i++)
	{
		res=res*i;
	}
	*b=*a;
	*a=*b;
	return res;
}
int main()
{
	int a=3,b=5,c;
	c=fun(&a,&b);// 
	printf("%d %d %d",a,b,c);
	return 0;
}
