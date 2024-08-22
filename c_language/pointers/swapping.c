/*to print swapping of two numbers */
#include<stdio.h>
void main()
{
	int a=10,b=20;
	printf("Before swap :\t %d\t %d \n",a,b);
	swap(a,b);
}
swap(int x,int y)
{
	int temp=x;
	x=y;
	y=temp;
	printf("after swap :\t %d\t %d \n",x,y);
}
