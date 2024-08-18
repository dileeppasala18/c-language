/*sum of n natural numbers*/
#include<stdio.h>
int main()
{
	int i,n,s;
	i=1;
	printf("enter the number");
	scanf("%d",&n);
	s=0;
	while (i<=n)
	{
		s=s+i;
		i++;
	}
	printf("sun of n natural number is %d",s);
	return 0;
}
