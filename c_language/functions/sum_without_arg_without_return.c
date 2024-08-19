/*function without arguments and with out return type */
#include<stdio.h>
void sum()
{
	int a,b,x;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	x=a+b;
	printf("sum is %d",x);
}
int main()
{
	sum();
	return 0;
}

