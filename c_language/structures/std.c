#include<stdio.h>
struct student
{
	int rno;
	char name[20];
	char address[20];
};
int main()
{
	struct student s;
	struct student *sp;
	sp=&s;
	printf("%d\n",sp->rno);
	printf("%d\n",sp->name);
	printf("%d\n",sp->address);
	printf("%d\n",sizeof(struct student));
	return 0;
}



