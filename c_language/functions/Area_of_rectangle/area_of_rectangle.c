/*area of rectangle using functions */
#include<stdio.h>
int area_of_rectangle(int l,int b)
{
	int area;
	area=l*b;
	return area;
}
int main()
{
	int z;
	z=area_of_rectangle(6,7);
	printf("area of rectangleis %d",z);
	return 0;
}

