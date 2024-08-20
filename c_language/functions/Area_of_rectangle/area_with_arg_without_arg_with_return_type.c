/*function with out arguments and with return type*/
#include<stdio.h>
int area_of_rectangle()
{
	int l,b,area;
	printf("enter the length");
        scanf("%d",&l);
	printf("enter the breadth");
	scanf("%d",&b);
	area=l*b;
	return area;
}
int main()
{
	int z;
	z= area_of_rectangle();
	printf("area of rectangle is %d",z);
	return 0;
}
