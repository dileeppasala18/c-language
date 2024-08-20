/*sum of n natural numbers */

#include<stdio.h>
int sum(int n)
{
	if (n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else 
	{
		return (n+sum(n-1));
	}
}
int main()
{
	int num,result;
	printf("enter the number :");
	scanf("%d",&num);
	result=sum(num);
	printf("the sum of %d natural numbers is %d\n",num,result);
	return 0;
}
