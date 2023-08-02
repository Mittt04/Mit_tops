#include<stdio.h>

void add();
void mult();
void sub();
void div();

int main()
{
	int a,b,c;
	add();
	mult();
	sub();
	div();
	
	return 0;
}

void add()
{
	int a =10;
 	int b =20;
	int c = a+b;
	
	printf("\n%d\n",c);
}

void mult()
{
	int a=10;
	int b=20;
	int c=a-b;
	printf("\n%d\n",c);
}

void sub()
{
	int a =10;
	int b =20;
	int c = a*b;
	printf("\n%d\n",c);
}

void div()
{
	int a =10;
	int b =20;
	int c =a/b;
	printf("\n%d\n",c);
}


