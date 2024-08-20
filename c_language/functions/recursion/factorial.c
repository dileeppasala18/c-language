/*to check fa5ctorial*/
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*fact(n-1));
	}
}
int main()
{
	int n1,result;
	printf("enter the number :",n1);
	scanf("%d",&n1);
	result=fact(n1);
	printf("the factorial of %d is %d\n",n1,result);
	return 0;
}
