/* power check*/
#include<stdio.h>
int power(int x,int y)
{
	if (y==0)
	{
		return 1;
	}
	else
	{
		return (x*power(x,(y-1)));
	}
}
int main()
{
	int a,b,z;
	printf("enter the a value");
	scanf("%d",&a);
	printf("enter the b value");
	scanf("%d",&b);
	z=power(a,b);
	printf("the power of %d power %d is %d\n",a,b,z);
	return 0;
}

