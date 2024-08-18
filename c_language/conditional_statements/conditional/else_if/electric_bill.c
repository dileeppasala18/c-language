#include<stdio.h>
int main()
{
	int current_units,previous_units,total_units,unit_price,total_price;
	current_units=1900;
 	previous_units=1720;
	total_units=current_units-previous_units;
	if (total_units<=100)
	{
		unit_price =3;
	}
	else if (total_units>100 & total_units<=150)
	{
		unit_price=5;
	}
	else if (total_units>150 & total_units<=200)
	{
		unit_price=7;
	}
	else
	{
		unit_price=9;
	}
	printf("total consumed units is %d",total_units);
	total_price=total_units * unit_price;
	printf("total price is %d",total_price);
	return 0;
}

