//Write a program to make multiplication of 2-D Matrix

#include<stdio.h>

int multiplication(int a[12][12],int b[12][12]);   //function declaration

int main()
{		
	int a[12][12],b[12][12];
	
	/*call function to multiply both matrix*/
	multiplication(a,b);  //function calling
	
	return 0;
}

int multiplication(int a[12][12],int b[12][12])  //function defination
{
	int mul[12][12],i,j,k,n,m,p,q;
	
	printf("\t\t\tMatrix Multiplication\n");
	
	printf("\n\nEnter the rows and column of matrix 1 : \n");
	scanf("%d%d",&n,&m);
	
	printf("\nEnter the rows and column of matrix 2 : \n");
	scanf("%d%d",&p,&q);
	
	if(m==p)
	{
	/*input elements from user*/
	printf("\n\n---------------Matrix: 1--------------\n\n");	
	for(i=0;i<n;i++) //row of matrix 1
	{
		for(j=0;j<m;j++) //column  of matrix 1
		{
			printf("Enter the elements : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	/*print elements of matrix 1*/
	printf("\n"); 	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) 
		{
			printf("%d   ",a[i][j]);
		}
		printf("\n");
	}
	
	/*input elements from user*/
	printf("\n\n\n---------------Matrix: 2--------------\n\n");	
	for(i=0;i<p;i++) //row of matrix 2
	{
		for(j=0;j<q;j++) //column  of matrix 2
		{
			printf("Enter the elements : ");
			scanf("%d",&b[i][j]);
		}
	}
	
	/*print elements of matrix 2*/
	printf("\n");
	for(i=0;i<p;i++) 
		{
		for(j=0;j<q;j++) 
		{
			printf("%d   ",b[i][j]);
		}
		printf("\n");
	}
	
	/*multiply two matrix*/	
	for(i=0;i<n;i++) 
	{
		for(j=0;j<q;j++) 
		{
			mul[i][j]=0;
			for(k=0;k<m;k++)   //for multiplicatn
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	/*print multipication of both matrix*/
	printf("\n\n\n---------------Result : Multiplication Matrix--------------\n\n");
	for(i=0;i<n;i++) 
		{
		for(j=0;j<q;j++) 
		{
			printf("%d   ",mul[i][j]);
		}
		printf("\n");
	}
    }
    else
    {
    	printf("\n\nThis multiplication is not possible.");
	}
	
}


