/Monday to Sunday using switch case 

#include<stdio.h>
int main()
{
	int day;
	printf("enter the day ");
	scanf("%d",&day);
	
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
			
		case 2:
			printf("Tuesday");
			break;
			
		case 3:
			printf("Wednesday");
			break;
			
		case 4:
			printf("Thurshday");
			break;
		
		case 5:
			printf("Friday");
			break;
			
		case 6:
			printf("Saturday");
			break;
			
		case 7:
			printf("Sunday");
			break;
			
		default:
			printf("please enter the number between 1 to 7");
	}
	return 0;
}
