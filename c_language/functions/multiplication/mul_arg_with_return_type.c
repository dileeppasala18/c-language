#include<stdio.h>
int  product(int num1,int num2)
{
	int num3;
	num3=num1*num2;
	return num3;

}
int main()
{
	int mul;
	mul=product(3,6);
	printf("product is  %d ",mul);
	return 0;
}

