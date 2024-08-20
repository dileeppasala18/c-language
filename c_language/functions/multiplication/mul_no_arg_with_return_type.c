#include<stdio.h>
int product()
{
	int num1,num2,result;
	printf("enter the first number:",num1);
	scanf("%d",&num1);
	printf("enter the second number:",num2);
	scanf("%d",&num2);
	result=num1*num2;
	return result;
}
int main()
{
	int mul;
	mul=product();
	printf("the product is %d\n",mul);
	return 0;
}
