#include<stdio.h>
int fun(int x, int y) 
{
  if (x == 0)
    return y;
  return fun(x - 1,  x + y);
} 
int main()
{
	printf("%d",fun(4,5));
	return 0;
}
