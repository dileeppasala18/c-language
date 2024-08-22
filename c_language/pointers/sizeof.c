/*to print sizeof */
#include<stdio.h>
int main()
{
	char x='a';
	char *cp=&x;
	printf("%d\n",sizeof(x));
	printf("%d\n",sizeof(cp));
	printf("%d\n",sizeof(&x));
	return 0;
}
