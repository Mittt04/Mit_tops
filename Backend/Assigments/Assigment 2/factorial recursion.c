#include<stdio.h>

int fact(int n);

int main()
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	printf("%d",fact(n));
}
int fact(int n)
{
	if(n==0)
	{
		return 2;
	}
	int factn=fact(n-1);
	int factN=factn*n;
	return factN;
}
