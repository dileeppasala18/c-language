#include<stdio.h>
void  product(int num1,int num2)
{
	int num3;
	num3=num1*num2;
	printf("the product of %d * %d =%d\n",num1,num2,num3);
}
int main()
{
	int a,b;
	printf("enter the first number:",a);
	scanf("%d",&a);
	printf("enter the second number:",b);
	scanf("%d",&b);
	product(a,b);
	return 0;
}
