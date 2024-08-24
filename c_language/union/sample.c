#include<stdio.h>
union sample
{
	int i;
	char c;
};
union sample u;
int main()
{
	u.i=1;
	printf("the value of a is :%d\n",u.i);
	if(u.c==1)
	{
		printf("it is little indian\n");
	}
	else
	{
		printf("it is big indian\n");
	}
	return 0;
}



