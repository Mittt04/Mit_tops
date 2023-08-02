//WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice
#include<stdio.h>

int main()
{
	int size,size1,size2,i,j,a[20],b[20],c[30],d;
	
	printf("enter the size of array A:  ");
	scanf("%d",&size1);
	printf("enter the element of array A :  ");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("enter the size of array B:  ");
	scanf("%d",&size2);
	printf("enter the element of array B :  ");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&b[i]);
	}
	
	printf("element of an array A: ");
	for(i=0;i<size1;i++)
	{
		printf("%d  ",a[i]);
	}
	
	printf("\nelement of an array B: ");
	for(i=0;i<size2;i++)
	{
		printf("%d  ",b[i]);
	}
	
	for(i=0;i<size1;i++)
	{
		c[i]=a[i];
	}

	for(i=0;i<size2;i++)
	{
		c[i+size1]=b[i];
	}
	
	printf("\n\nmerge element of an array A and B    : ");
	size=size1+size2;
	for(i=0;i<size;i++)
	{
		printf("%d  ",c[i]);
	}
 	
 	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(c[j]<c[i])
			{
				d=c[j];
				c[j]=c[i];
				c[i]=d;
			}
		}
	}
	printf("\n\nelements of array in ascending order : ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",c[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(c[j]>c[i])
			{
				d=c[j];
				c[j]=c[i];
				c[i]=d;
			}
		}
	}
	printf("\n\nelements of array in descending order: ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",c[i]);
	}
	return 0;
}

