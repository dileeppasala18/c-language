/*employe details using structures*/
#include<stdio.h>

#include<string.h>
int main()
{

	struct emp
	{
	int emp_id ;
	char name[20];
	float salary;
	char adress[100];
	};

	struct emp e;


	e.emp_id=12;
	strcpy(e.name,"dileep");
	e.salary=45000.50;
	strcpy(e.adress,"2/455,t.agraharam,rajampet");
	printf("the employe id is : %d\n",e.emp_id);
	printf("the employe name is : %s\n",e.name);
	printf("the employe salary is : %f\n",e.salary);
	printf("the employe adress is : %s\n",e.adress);
	return 0;
}
