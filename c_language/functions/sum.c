/*function with arg and return type */
#include<stdio.h>
int sum(int a,int b)
{
	int x;
	x=a+b;
	return x;
}
int main()
{
	int z;
	z=sum(6,8);
	printf("sum is %d",z);
	return 0;
}

