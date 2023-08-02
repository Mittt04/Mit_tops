#include<stdio.h>

int main()

{
	printf("find factor\n");
	int num,i;
	printf("enter ther number to find the factor of :");
	scanf("%d",&num);
	printf("\n\n\n factor of %d are \n\n",num);
	
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		printf("%d\n",i);
	}
	
	return 0;
}
