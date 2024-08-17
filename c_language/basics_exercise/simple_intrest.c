#include<stdio.h>
int main ()
{
	int p,t,r,si;
	printf("enter the principle ammount");
	scanf("%d",&p);
	printf("enter the time period");
	scanf("%d",&t);
	printf("enter the rate of intrest");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("simple intrest is %d",si);
	return 0;
}

