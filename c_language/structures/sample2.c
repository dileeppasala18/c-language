#include<stdio.h>
#pragma pack(1)
int main()
{
	struct sample
	{
		int x;
		char a;
	};
	struct sample s;
	printf("%d\n",sizeof(s));
}


