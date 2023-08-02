//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>

int main()
{
	int a=20,b=10,c,num;
	
	printf("enter the value of a :  ");
	scanf("%d",&a);
	printf("enter the value of b :  ");
	scanf("%d",&b);
	printf("\nenter the number:  ");
	scanf("%d",&num);
	
	switch(num)
	{
	case 1: 
		c=a+b;
		printf("addition = %d",c);
		break;
	
	case 2:
		c=a-b;
		printf("subtraction = %d",c);
		break;
		
	case 3:
		c=a*b;
		printf("multiplication = %d",c);
		break;
		
	case 4:
		c=a/b;
		printf("division = %d",c);
		break;
		
	default :
		printf("please enter the number between 1 to 4");	
	}
	
	return 0;
}
