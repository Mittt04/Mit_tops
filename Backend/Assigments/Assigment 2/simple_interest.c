//simple interest

#include<stdio.h>
int main()
{
	float P,R,T,i; //P=principal(initial value) R=interest rate  T=time
	printf("enter the values ");
	scanf("%f%f%f",&P,&R,&T);
	
	i=(P*R*T)/100; //interest
	printf("Interest = %f\n",i);
	return 0;
}
