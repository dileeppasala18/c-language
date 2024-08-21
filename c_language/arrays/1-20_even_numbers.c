/*print 1-20 even numbers*/
#include<stdio.h>
int main()
{
	int i,a[100];
	int k=0;
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			a[k]=i;
			k++;
		}
	}
	for (i=0;i<k;i++)
	{
		printf("%3d",a[i]);
	}
	printf("\n");
	return 0;
}
