#include<stdio.h>
#include<string.h>
struct salary
{
	int empid;
	char name[50];
	int basic;
};
int emp_salary(struct salary *s)
{
	float hra,da,itax,gsal,netsal;
	if(s->basic<=30000)
	{
		hra=((float)(s->basic*15)/100);
		da=((float)(s->basic*10)/100);
		itax=((float)(s->basic*5)/100);
	}
	else if(s->basic<50000)
	{
		hra=((float)(s->basic*20)/100);
		da=((float)(s->basic*15)/100);
		itax=((float)(s->basic*10)/100);
	}
	else if(s->basic<70000)
	{
		hra=((float)(s->basic*25)/100);
		da=((float)(s->basic*20)/100);
		itax=((float)(s->basic*15)/100);
	}
	else if(s->basic<100000)
	{
		hra=((float)(s->basic*30)/100);
		da=((float)(s->basic*25)/100);
		itax=((float)(s->basic*20)/100);
	}
	else 
	{
		hra=((float)(s->basic*35)/100);
		da=((float)(s->basic*30)/100);
		itax=((float)(s->basic*25)/100);
	}
	printf("HRA is %.2f\n",hra);
	printf("DA is %.2f\n",da);
	printf("INCOME TAX is %.2f\n",itax);
	gsal=s->basic+hra+da;
        printf(" employee gross salary is %.2f\n",gsal);
	netsal=gsal-itax;
	return netsal ;
}
int main()
{
	struct salary e;
	int result;
	printf("enter employee id :");
	scanf("%d",&e.empid);
	printf("enter employee name :");
	scanf("%s",&e.name);
	printf("enter employee basic salary :");
	scanf("%d",&e.basic);
	result=emp_salary(&e);
	printf("employee net salary is :%d\n",result);
	return 0;
}




