#include<stdio.h>

int main()
{
	int num,i;
	printf("enter the number");
	scanf("%d",&num);
	printf("\n***even number***\n");
	
	for(i=1;i<=num;i=i+2)
	{
		printf("%d\n",&i);
	}
	
	printf("\n***odd number***\n");
	
	for(i=1;i<=num;i=i+2)
	{
		printf("%d\n",&i);
	}
	
	
	return 0;
}
