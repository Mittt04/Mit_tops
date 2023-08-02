#include<stdio.h>

void hello(int n);
main()
{
	hello(7);
	
}
void hello(int n)
{
	if(n==0)
	{
		return;
	}
	printf("\nHello world");
	hello(n-1);
}
