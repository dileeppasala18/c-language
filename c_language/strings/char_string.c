#include<stdio.h>
#include<string.h>
int main()

{
	char str[30]="hello world";
	char *ptr;
	ptr=&str;

	printf("%d\n",sizeof(str));
	printf("%s\n",ptr);
	return 0;
}

