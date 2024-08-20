/*read the 10 elements and print the 10 elements */
#include<stdio.h>
int main()
{
	int i,a[10];
	printf("\n enter the 10 elements :");
	for (i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
