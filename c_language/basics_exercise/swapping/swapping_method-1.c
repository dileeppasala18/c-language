#include<stdio.h>
int main()
{
	int x,y,temp;
	x=10;
	y=20;
	temp=x;
	x=y;
	y=temp;
	printf("swapping of %d and %d",x,y);
	return 0;
}

