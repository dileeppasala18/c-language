#include<stdio.h>
#pragma pack(1)
#include<string.h>
struct sample
{
	char c;
	int x;
}s;
int main()
{
	struct sample s;
	struct sample *sp;
	sp=&s;
	printf("%d\n",sizeof(s));
	printf("%d\n",sizeof(sp));
	return 0;
}

