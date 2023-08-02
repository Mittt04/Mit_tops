//WAP to find area of circle, rectangle and triangle

#include<stdio.h>
int main()
{
	float l,b,h,a,c,d,w;
	float pi=3.14,r;
	
	printf("Area of Circle\n");
	printf("\nenter a radius of circle : ");
	scanf("%f",&r);  //r=radius
	a=(pi*r*r);    //area of the circle
	printf("ans = %f\n\n",a);
	
	printf("Area of Triangle\n");
	printf("\nenter a base and hight of triangle : ");
	scanf("%f%f",&b,&h); //b=base  h=hight
	c=(b*h)/2; //area of the triangle
	printf("ans = %f\n\n",c);
	
	printf("Area of Rectangle\n");
	printf("\nenter a length and width of rectangle: ");
	scanf("%f%f",&l,&w);  //l=lenght b=width
	d=(l*w);  //area of the rectangle
	printf("ans = %f\n\n",d);
	
	
	return 0;
}
