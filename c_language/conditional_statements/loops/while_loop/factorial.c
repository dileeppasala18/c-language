/*check factorial*/
#include<stdio.h>
int main()
{
	int i,n,s;
	i=1;
	printf("enter the number");
	scanf("%d",&n);
	s=1;
	while (i<=n)
	{
		s=s*i;
                i++;
	}
	printf("factorial of %d is %d\n",n,s);
	return 0;
}

