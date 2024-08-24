/*to print employee details*/
#include<stdio.h>
#include<string.h>
struct emp
{
	int emp_id;
	char ename;
	int basic;
	float hra;
	float da;
	float itax;
	float gsal;
	float netsal;
};
int main()
{
	struct emp e;
	printf("enthe employee id is : ");
	scanf("%d",&e.emp_id);
	printf("enter the employee name is : ");
	scanf("%s",&e.ename);
	printf("enter the employee basic salary is : ");
	scanf("%d",&e.basic);

	
	if (e.basic<30000)
	{
		
		e.hra=(e.basic*10)/100;
	   	e.da=(e.basic*5)/100;
		e.itax=(e.basic*3)/100;
	}
	else if (e.basic<6000)
	{
		e.hra=(e.basic*15)/100;
        	e.da=(e.basic*10)/100;
        	e.itax=(e.basic*7)/100;
	}
	else if (e.basic<100000)
	{
		e.hra=(e.basic*20)/100;
        	e.da=(e.basic*15)/100;
        	e.itax=(e.basic*10)/100;
	}
	else
	{
		e.hra=(e.basic*25)/100;
        	e.da=(e.basic*20)/100;
	        e.itax=(e.basic*15)/100;
	}
	e.gsal=e.basic+e.hra+e.da;
	e.netsal=e.gsal-e.itax;

	printf("the employee hra is : %f\n",e.hra);
	printf("the employee da is : %f\n",e.da);
	printf("the employee itax is : %f\n",e.itax);
	printf("the employee gasl is : %f\n",e.gsal);
	printf("the employee netsal is :%f\n",e.netsal);

	return 0;
}

			
