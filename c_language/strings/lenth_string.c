#include<stdio.h>
#include<string.h>
int main()
{

char str[20]="hello world";
int c=0;
int l;
char *ptr=&str;
l=strlen(str);
printf("length of the string is %d\n",l);
while (*ptr!=0)
{
	printf("%c\n",*ptr);
	ptr++;
	c++;
}
printf("length of the string is %d\n",c);
return 0;
}
