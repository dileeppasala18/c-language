/*sum and avg of n natural numbers*/
#include<stdio.h>
int main()
{
	int n, a[25],i,sum,avg;
	printf("enter the size of variables:");
	scanf("%d",&n);
	printf("enter the elements %d\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of %d natural numbers is %d\n",n,sum);
	avg=sum/n;
	printf("the avg of %d natural numbers is  %d\n",n,avg);
	return 0;
}
