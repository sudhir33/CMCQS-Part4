float fun(a,b)
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
	float a=3,b=5;
	a=fun(a,b);
	printf("%f",a);
	return 0;
}
