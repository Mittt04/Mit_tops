//WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
	int y;
	printf("enter the year: ");
	scanf("%d",&y);
		
	    if(y%4==0)
	    {
	 		printf("given year is leap year");
		}
		else
		{
			printf("given year is not leap year");
		}
	
	return 0;
}
