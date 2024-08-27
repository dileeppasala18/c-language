#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	fptr=fopen("sample.txt","w");
	fputs("hello good day\n",fptr);
	fputs("we are learning c language",fptr);
	fclose(fptr);

	return 0;
}

