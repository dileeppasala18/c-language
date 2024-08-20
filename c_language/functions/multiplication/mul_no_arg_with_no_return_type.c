#include<stdio.h>
void product()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1*num2;
	printf("the product of %d * %d = %d\n",num1,num2,result);
}
int main()
{
	product();
	return 0;
}
