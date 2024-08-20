/*fibinancci series*/

#include<stdio.h>
int fib(int num)
{
	if (num==0)
	{
		return 0;
	}
	else if (num==1)
	{
		return 1;
	}
	else
	{
		return(fib(num-1)+fib(num-2));
	}
}

int main()
{
	int num1;
	printf("enter a value :",num1);
	scanf("%d",&num1);
	for (int i=0;i<num1;i++)
	{
		printf("%d\n",fib(i));
	}
	return 0;
}
