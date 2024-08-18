/*factors check*/
#include<stdio.h>
int main()
{
	int f,n,i,r;
	f=0;
	printf("enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		r=n%i;
		if (r ==0)
		{
			f++;
		}
		i++;
	}
	printf("factors is %d",f);
	return 0;
}



