#include<stdio.h>
void fun(a,j)
{
	printf("%d  %d\n",a,j);
}
int main()
{
	int a=5,i,j=1;
	for(i=0;i<a;i++)
	{
		fun(a,j);
	}
	return 0;
}
