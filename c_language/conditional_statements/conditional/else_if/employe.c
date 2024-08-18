#include<stdio.h>
int main()
{
	int Basic_salary;
	float HRA,DA,Income_tax,Gross_salary,Net_salary;
	printf("enter the basic salary ");
	scanf("%d",&Basic_salary);
	if (Basic_salary<=30000)
	{
		HRA=(Basic_salary*15)/100;
		DA=(Basic_salary*10)/100;
		Income_tax=(Basic_salary*5)/100;
	}
	else if (Basic_salary<=60000)
	{
                HRA=(Basic_salary*25)/100;
                DA=(Basic_salary*15)/100;
                Income_tax=(Basic_salary*10)/100;
        }
	else if (Basic_salary<=100000)
	{
                HRA=(Basic_salary*30)/100;
                DA=(Basic_salary*20)/100;
                Income_tax=(Basic_salary*15)/100;
        }
	else
	{
                HRA=(Basic_salary*35)/100;
                DA=(Basic_salary*25)/100;
                Income_tax=(Basic_salary*20)/100;
        }
	Gross_salary = Basic_salary+HRA+DA;
	Net_salary = Gross_salary-Income_tax;
	printf("House Rent Allowance is %f ",HRA);
	printf("Daily Allowance is %f ",DA);
	printf("Gross Sallary is %f  ",Gross_salary);
	printf("Net Sallary is %f ",Net_salary);
	return 0;
}





