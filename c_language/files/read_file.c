#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fptr;
	fptr=fopen("sample.txt","r");
	int content[1000];

	if (fptr!=NULL){
		printf("file open succefull");
	}
	else{
		printf("file open unsuccessful");
	}

	fclose(fptr);

	return 0;

}

