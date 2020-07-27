#include<stdio.h> 
int fun() 
{ 
	static int count; 
	return count++; 
} 

int main() 
{ 
	int i=1;
	for(i=1;i<5;i++)
		printf("%d\n", fun());
	return 0; 
}

