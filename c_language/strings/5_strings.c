//single string using pointers

/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[5][20]={"dileep","sunny","sai","diva","yeshwanth"};
	int i=0;
	while(i<5)
	{
		printf("%s\n",str[i]);
		i++;
	}
	return 0;
}
*/
//multiple strings using pointers 


/*#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[2][20]={"dileep","sunny"};
	char *ptr[2];
	i=0;
	while(i<2)
	{
		ptr[i]=str[i];
		i++;
	}
	i=0;
	while(i<2)
	{
		printf("%s\n",ptr[i]);
		i++;
	}
	return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
        int i,j;
        char str[2][20]={"dileep","sunny"};
        char *ptr[2];
        i=0;
        while(i<2)
        {
		ptr[i]=str[i];
		i++;
	}
	i=0;
	while(i<2)
	{
		j=0;
		while(ptr[i][j]!='\0')
		{
			printf("%c\n",ptr[i][j]);
			j++;
		}
	i++;
	}
	return 0;
}


