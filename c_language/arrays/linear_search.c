/*check linear search */
#include<stdio.h>
int main()
{
	int x,i,found,a[]={5,45,65,76,50,60,80,40};
	printf("enter the value");
	scanf("%d",&x);
	found=0;
	for (i=0;i<8;i++)
	{
		if (a[i]=x)
		{
			found=1;
			break;
		}
	}
	if (found=1)
	{
		printf("%d is found",x);
	}
	else
	{
		printf("%d is not found",x);

	}
	printf("\n");
	return 0;
}

