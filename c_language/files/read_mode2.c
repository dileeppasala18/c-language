#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr=fopen("sample.txt","r");
	char content[1000];
	while (fgets(content,1000,fptr))
	{
		printf("%s",content);
	}
	fclose(fptr);
	return 0;
}

			
