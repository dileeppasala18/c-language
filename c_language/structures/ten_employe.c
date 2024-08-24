/*print n employe details*/
#include<stdio.h>
#include<string.h>
int main()
{
	struct emp
	{
		int empid;
		char name[20];
		float salary;
		char adress[100];
	};
	int n;
	printf("enter the n value is :");
	scanf("%d",&n);
	struct emp e[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter id:");
		scanf("%d",&e[i].empid);
		printf("enter name:");
		scanf("%s",&e[i].name);
		printf("enter salary:");
		scanf("%f",&e[i].salary);
		printf("enter address:");
		scanf("%s",&e[i].adress);
	}
	for(i=0;i<n;i++)
	{
		printf("the employee id is %d\n",e[i].empid);
		printf("the employee name is %s\n",e[i].name);
		printf("the employee salary is %f\n",e[i].salary);
		printf("the employee address is %s\n",e[i].adress);
	}
	return 0;
}
