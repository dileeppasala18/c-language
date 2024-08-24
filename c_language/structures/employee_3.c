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
        int n,i;
	printf("enter the n value");
	scanf("%d",&n);
	struct emp e[n];
        for (i=0;i<n;i++)
	{
		printf("enthe employee id is : ");
        	scanf("%d",&e[i].emp_id);
        	printf("enter the employee name is : ");
        	scanf("%s",&e[i].ename);
        	printf("enter the employee basic salary is : ");
        	scanf("%d",&e[i].basic);
	
		if (e[i].basic<30000)
        	{

                	e[i].hra=(e[i].basic*10)/100;
                	e[i].da=(e[i].basic*5)/100;
                	e[i].itax=(e[i].basic*3)/100;
        	}
        	else if (e[i].basic<6000)
        	{	
                	e[i].hra=(e[i].basic*15)/100;
                	e[i].da=(e[i].basic*10)/100;
                	e[i].itax=(e[i].basic*7)/100;
        	}
        	else if (e[i].basic<100000)
        	{
       	        	e[i].hra=(e[i].basic*20)/100;
                	e[i].da=(e[i].basic*15)/100;
                	e[i].itax=(e[i].basic*10)/100;
        	}
        	else
        	{
        	        e[i].hra=(e[i].basic*25)/100;
        	        e[i].da=(e[i].basic*20)/100;
        	        e[i].itax=(e[i].basic*15)/100;
        	}

        	e[i].gsal=e[i].basic+e[i].hra+e[i].da;
        	e[i].netsal=e[i].gsal-e[i].itax;

        	printf("the employee hra is : %.2f\n",e[i].hra);
        	printf("the employee da is : %.2f\n",e[i].da);
        	printf("the employee itax is : %.2f\n",e[i].itax);
        	printf("the employee gasl is : %.2f\n",e[i].gsal);
        	printf("the employee netsal is :%.2f\n",e[i].netsal);
	}

        return 0;
}

