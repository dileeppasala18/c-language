/*function with arguments and without return type*/
#include<stdio.h>
void sum(int a,int b)
{
	int x;
	x=a+b;
	printf("sum is %d",x);
}
int main()
{
	sum(6,8);
	return 0;
}

