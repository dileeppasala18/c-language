/*check polindrum or not a polindrum*/
#include<stdio.h>
int main()
{
	int n,t,r;
	printf("enter the number");
	scanf("%d",&n);
	t=n;
	r=0;
	while(n>0)
	{
		r=(r*10)+(n%10);
		n=n/10;
	}
	if (t==r)
	{
		printf("%d is a polindrum",t);
	}
	else
	{
		printf("%d is not a polindrum",t);
	}
	return 0;
}



