/*to check  min and max */
#include<stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("\n enter the n value");
	scanf("%d",&n);
	printf("\n enter %d elements",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for (i=0;i<n;i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
	}
	printf(" minimun element is %d\n",min);

	max=a[0];
	for (i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
	}
	printf(" maximum element is %d\n",max);
	return 0;
}

