//Write a program to make simple calculator (to make addition,subtraction,multiplication,division and modulo)

#include<stdio.h>

int main()
{
	int a,b;
	int c;
	printf("enter the value of a and b :  ");
	scanf("%d %d",&a,&b);
	
	c=a+b;
	printf("Addition of the given numbers = %d\n",c);
	
	c=a-b;
	printf("Subtraction  of the given numbers = %d\n",c);
	
	c=a*b;
	printf("Multiplication of the given numbers = %d\n",c);
	
	c=a/b;
	printf("Division of the given numbers = %d\n",c);
	
	c=a%b;
	printf("Modulo of the given numbers = %d ",c);
	
	return 0;
}
