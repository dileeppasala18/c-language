/*function with out arguments and with return type */
#include<stdio.h>
int sum()
{
	int a,b,c;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	c=a+b;
	return c;
}
int main()
{
	int e;
	e=sum();
	printf("sum is %d",e);
	return 0;
}

