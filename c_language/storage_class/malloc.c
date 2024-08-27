#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	ptr=(int*)malloc(sizeof(int));
	if(ptr==NULL)
	{
		printf("memory allocation failed\n");
	}
	else 
	{
		*ptr=42;
		printf("value of the allocated integer :%d\n",*ptr);
		free(ptr);
	}
	return 0;
}
