#include<stdio.h>
void fun(a,b)
{
	int i,res=1;
	for(i=a;i<b;i++)
	{
		res=res*i;
	}
	return res;
}
int main()
{
	int a=3,b=5;
	a=fun(a,b);//
	printf("%d",a);
	return 0;
}
