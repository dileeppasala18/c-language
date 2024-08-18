/*reverse of the number*/
#include<stdio.h>
int main()
{
	int s,n,r;
	s=0;
	printf("enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		s=s*10+r; 
		n=n/10;
		printf("reverse of the number %d is: ",s);
	}
	return 0;
}




