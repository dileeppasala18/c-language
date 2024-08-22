/*to print adress and sizeof */
#include<stdio.h>
int main()
{
	int x=10;
	int* ip;
	ip =&x;
	printf("%d\n",x);
	printf("%u\n",&x);
	printf("%u\n",ip);
	printf("%d\n",*(&x));
	printf("%d\n",*ip);
	printf("%d\n",sizeof(ip));
	return 0;
}


